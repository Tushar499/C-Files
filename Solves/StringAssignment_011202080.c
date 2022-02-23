#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define FAIL_VAL -99999
#define SUCCESS_VAL 99999
#define MAX_USER 20
#define MAX_LEN 200

char emailArr[MAX_USER][MAX_LEN];
char passArr[MAX_USER][MAX_LEN];

char nameArr[MAX_USER][MAX_LEN];
char addressArr[MAX_USER][MAX_LEN];

int user_count=0;


/* no 1 i have made these bool function because as given in the question. i have to do several checks
like my email contains @ or not my password should contains digit or not my password and emails are
valid or not so to do this task i have made these function there are different function
like which checks the different parameters and return a bool value means true or false */


/*here i have made a ischar which return a boolean value true or false
The work of this function is too check that character is a alphabet or not */
bool ischar(char c)
{
    return ((c>='a' && c<='z'));
}

bool is_uppercase(char c)
{
    return ((c>='A' && c<='Z'));
}
// here i have made a another boolean  function which checks that the given mail is valid or not //
bool isvalidemail(char *s)
{
    int pt=-1,at=-1,atcount=0;

    /* if the first character of the given mail is not a alphabet then the mail is invalid
    so i check this by using my function ischar */

    if(!ischar(s[0]))
    {
        return 0;
    }

    /* if the first char of mail is alphabet then i will check the position of the @ and . in the given mail.
    strlen( ) function counts the number of characters in a given string and returns the integer value.
    It stops counting the character when null character is found. Because, null character indicates the end of the string in C  */
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='@')
        {
            at=i;
            atcount++;
        }
        if(s[i]=='.')
        {
            pt=i;
        }
        if(is_uppercase(s[i]))
        {
            printf("\n\n\t All characters of your mail must be lowercase :) ");
            return 0;
        }
    }

    // if the position of the @  is greater then the . it means the email is invalid
    // or if any of them @and . is not present in the mail then also the mail is invalid
    // so to check this here i have write the if  statement
    if(at>pt || at==-1 || pt==-1 || atcount>1)
    {
        printf("\n\n\t Your mail must have contained one '@' and a dot '.' ");
        printf("\n\n\t You have to write '@' sign before dot '.' sign.");
        printf("\n\t Avoid '@' twice in your mail.");
        printf("\n\t Avoid '.' sign as the last character of your mail.");
        return 0;
    }

    //if the point . is placed at the end of our mail then also our mail id is incorrect so to check this one more if statement
    // if statement is true then function will return 0 means false
    if(s[pt]==s[strlen(s)-1])
    {
        printf("\n\n\t You can't write '.' sign as the last character of your mail.");
        return 0;
    }

    // if everything is fine and okay and well place then the function will return the 1 value means true our mail is valid
    return 1;
}


/*now same thing i have done here to check my password that it is in the correct format or not
so to check this i have to make several boolean function one of them is for that a character is a special character or not
second function is to check that character is uppercase character or not third one is to check that the character is lowercase or not
and last one is to check that a character is a digit or not */
bool isspecialchar(char c){
    return ((c=='$' || c=='@' || c=='*' || c=='#'));
    }

bool isuppercase(char c){
     return ((c>='A' && c<='Z'));
     }

bool islowercase(char c){
     return ((c>='a' && c<='z'));
     }

// here i have used the ASCII value of the numerical no like 0 have value 48 and 9 have 57

bool isdigit(char c){
    return ((c>=48 && c<=57));//We are using ASCII value of the digit for "(char c)" type parameter
    }

// now this function checks that my password is in correct manner or not
bool ispassword(char *s)
{
    int digit=0,upc=0,lwc=0,spc=0;

    // if password length is less then 8 then it will return 0
    if(strlen(s)<8)
    {
        printf("\n\n\t Password should contain at least 8 characters. ");
        return 0;
    }

    // else it will check the all parameters that all things are present or not
    for(int i=0;i<strlen(s);i++)
    {
        if(isuppercase(s[i]))
        {
            upc++;
            continue;
        }
        if(islowercase(s[i]))
        {
            lwc++;
            continue;
        }
        if(isdigit(s[i]))
        {
            digit++;
            continue;
        }
        if(isspecialchar(s[i]))
        {
            spc++;
            continue;
        }
    }

    // if any of the condition fails then it will return 0
    if(lwc==0 || upc==0 || spc==0 || digit==0)
    {
        return 0;
    }

    // else return 1 means our password is in th correct format and valid
    return 1;
}


// this function checks the duplicate entry
// means if a user sign up with already registered mail then  it will create a problem for us in the s
// searching and the login
// so we discard the duplicate entries

bool iscopymail(char *s)
{
    for(int i=0;i<user_count;i++)
    {
        if(!strcmp(s,emailArr[i]))
        {
            return 1;
        }

    }
    return 0;

}

// so here is the sign up function

int signupUser(char email[], char pass[]){

    //Write your code here
    if(!isvalidemail(email))
    {
        printf("\n\n\t INVALID EMAIL FORMAT :) ");
        printf("\n\t SIGNUP FAILED :) ");
        return FAIL_VAL;
    }

    if(iscopymail(email))
    {
        printf("\n\n\t GIVEN MAIL IS ALREDAY REGISTER !!! ");
        printf("\n\n\t PLEASE TRY WITH ANOTHER MAIL :) ");
        printf("\n\n\t\t SIGNUP FAILED :) ");
        return FAIL_VAL;
    }

    if(!ispassword(pass))
    {
        printf("\n\t PASSWORD IS NOT IN VALID FORMAT !!! ");
        printf("\n\n\t The password must have contained both Uppercase and Lowercase letters,");
        printf("\n\t Digits,Special characters like $ # * @ and at least 8 characters.");
        printf("\n\n\t SIGNUP FAILED :) ");
        return FAIL_VAL;
    }




    else
    {

    sprintf(emailArr[user_count],"%s",email);
    sprintf(passArr[user_count],"%s",pass);
    user_count++;

    printf("\n\n\t SIGN UP SUCCESFULL !!! ");
    }
    return user_count;

}

// login f user email match with any of the register mail and the password match with corresponding mail
// then the login will successful

int loginUser(char email[], char pass[]){
  //Write your code here
  /*The strcmp() function is used to compare two strings two strings str1 and str2 .
If two strings are same then strcmp() returns 0 , otherwise, it returns a non-zero value.
 This function compares strings character by character using ASCII value of the characters.*/

    for(int i=0;i<user_count;i++)
    {
        if(!strcmp(email,emailArr[i]))
        {
            if(!strcmp(pass,passArr[i]))
            {
                printf("\n\n\t LOGIN SUCCESSFULL !!! ");
                return i;
            }

            printf("\n\n\t INCORRECT PASSWORD :) ");
            printf("\n\t LOGIN FAILED :) ");
            return FAIL_VAL;
        }
    }

    printf("\n\n\t Email is not registered or invalid mail :) ");
    printf("\n\t LOGIN FAILED :) ");

    return FAIL_VAL;
}

int buildUserProfile(char email[], char firstName[], char lastName[], char address[]){

    //Write your code here

    // here we find the mail if mail match
    // with already register mail then data will update for that user
    for(int i=0;i<user_count;i++)
    {
        if(!strcmp(email,emailArr[i]))
        {
//sprintf() function is a file handling function in C programming language which is used to write formatted output to the string.
             sprintf(addressArr[i],"%s",address);
             sprintf(nameArr[i],"%s",firstName);
             for(int k=strlen(firstName),j=0;j<=strlen(lastName);j++,k++)
             {
                 if(j==0)
                 {
                      nameArr[i][k]=32;   //ASCII value of 32 means a Space.
                      continue;
                 }
                nameArr[i][k]=lastName[j-1];
             }

             printf("\n\n\t USER PROFILE SUCCESFULLY UPDATED !!! ");
             return 1;
        }

    }

    // if mail not found then it will return fail and show a error message
    printf("\n\n\t Email not found :) ");
    return FAIL_VAL;
}


// this is the search by name
// This case is an insensitive case means it allows to search with substring.

void searchByName(char name[]){
    //Write your code here
    int index[MAX_USER],count=0;
    int a,n=0;

    for(int i=0;i<user_count;i++)
    {
        a=0;
        if(!strcmp(name,nameArr[i]))
        {
           count=1;
           index[0]=i;
           break;
        }
        for(int j=0;j<strlen(name);j++)
        {
            if(name[j]!=nameArr[i][j])
            {
                break;
            }
            a++;
        }

        if(a==strlen(name))
        {
            index[n]=i;
            count++;
            n++;
        }

    }

    if(!count){

      printf("\n\n\t NO user found with this name :) ");
            return FAIL_VAL;}

    printf("\n\n\t %d user found with this name  :) ",count);
    for(int i=0;i<count ;i++)
    {
      printf("\n\t %d :",i+1);
      printf("\n\t EMAIL :- %s",emailArr[index[i]]);
      printf("\n\t NAME :- %s",nameArr[index[i]]);
      printf("\n\t ADRESS :- %s",addressArr[index[i]]);
      printf("\n");
    }
  return SUCCESS_VAL;
}

void searchByAddress(char address[]){
    //Write your code here

    int index[MAX_USER],count=0;
    int a,n=0;

    for(int i=0;i<user_count;i++)
    {
        a=0;
        if(!strcmp(address,addressArr[i]))
        {
           count=1;
           index[0]=i;
           break;
        }
        for(int j=0;j<strlen(address);j++)
        {
            if(address[j]!=addressArr[i][j])
            {
                break;
            }
            a++;
        }

        if(a==strlen(address))
        {
            index[n]=i;
            count++;
            n++;
        }

    }

    if(!count){

      printf("\n\n\t NO user found with this Address :) ");
            return FAIL_VAL;}

    printf("\n\n\t %d user found with this Address  :) ",count);
    for(int i=0;i<count ;i++)
    {
      printf("\n\t %d :",i+1);
      printf("\n\t EMAIL :- %s",emailArr[index[i]]);
      printf("\n\t NAME :-  %s ",nameArr[index[i]]);
      printf("\n\t ADRESS :-  %s",addressArr[index[i]]);
      printf("\n");
    }
  return SUCCESS_VAL;


}

int main()
{
        while(1)
        {
            printf("*****************************************************************************************************\n");
            printf("1. Sign Up User. 2. Login User. 3. Build User Profile. 4.Search By Name. 5. Search By Address. 6.Exit \n");

            int choice;
            scanf("%d",&choice);

            if(choice==1){

                char mail[MAX_LEN], pass[MAX_LEN];
                printf("Give User Email :");
                scanf("\n%[^\n]s",mail);
                printf("Give User Password :");
                scanf("\n%[^\n]s",pass);
                signupUser(mail,pass);
            }

            if(choice==2){

                char mail[MAX_LEN], pass[MAX_LEN];
                printf("Give User Email :");
                scanf("\n%[^\n]s",mail);

                printf("Give User Password :");
                scanf("\n%[^\n]s",pass);

                loginUser(mail,pass);
            }

            if(choice==3){

                char mail[MAX_LEN], fname[MAX_LEN], lname[MAX_LEN], address[MAX_LEN];
                printf("Give User Email :");
                scanf("\n%[^\n]s",mail);
                printf("%s\n",mail);
                printf("Give First Name :");
                scanf("\n%[^\n]s",fname);
                printf("%s\n",fname);
                printf("Give Last Name :");
                scanf("\n%[^\n]s",lname);
                printf("%s\n",lname);
                printf("Give Address :");
                scanf("\n%[^\n]s",address);
                printf("%s\n",address);

                buildUserProfile(mail,fname,lname,address);
            }

            if(choice==4){

                char name[MAX_LEN];
                printf("Give User Name :");
                scanf("\n%[^\n]s",name);

                searchByName(name);
            }

             if(choice==5){

                char address[MAX_LEN];
                printf("Give User Address :");
                scanf("\n%[^\n]s",address);

                searchByAddress(address);
            }
            if (choice==6){
                break;
            }

          printf("\n\n");

        }

}
