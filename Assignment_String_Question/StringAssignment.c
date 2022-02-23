#include<stdio.h>
#include<string.h>


#define FAIL_VAL -99999
#define SUCCESS_VAL 99999
#define MAX_USER 20
#define MAX_LEN 200

char emailArr[MAX_USER][MAX_LEN];
char passArr[MAX_USER][MAX_LEN];

char nameArr[MAX_USER][MAX_LEN];
char addressArr[MAX_USER][MAX_LEN];

int user_count=0;

int signupUser(char email[], char pass[])
{
//Write your code here
}

int loginUser(char email[], char pass[])
{
    //Write your code here
}

int buildUserProfile(char email[], char firstName[], char lastName[], char address[])
{
    //Write your code here
}

void searchByName(char name[])
{
    //Write your code here
}

void searchByAddress(char address[])
{
    //Write your code here
}

int main()
{
    while(1)
    {
        printf("******************************************************************************************************\n");
        printf("1. Sign up User. 2. login User. 3. build User Profile. 4.Search By Name. 5. Search By Address. 6.exit \n");

        int choice;
        scanf("%d",&choice);

        if(choice==1)
        {

            char mail[MAX_LEN], pass[MAX_LEN];
            printf("give User Email :");
            scanf("\n%[^\n]s",mail);
            printf("give User Password :");
            scanf("\n%[^\n]s",pass);

            signupUser(mail,pass);
        }

        if(choice==2)
        {

            char mail[MAX_LEN], pass[MAX_LEN];
            printf("give User Email :");
            scanf("\n%[^\n]s",mail);

            printf("give User Password :");
            scanf("\n%[^\n]s",pass);

            loginUser(mail,pass);
        }

        if(choice==3)
        {

            char mail[MAX_LEN], fname[MAX_LEN], lname[MAX_LEN], address[MAX_LEN];
            printf("give User Email :");
            scanf("\n%[^\n]s",mail);
            printf("%s\n",mail);
            printf("give First Name :");
            scanf("\n%[^\n]s",fname);
            printf("%s\n",fname);
            printf("give Last Name :");
            scanf("\n%[^\n]s",lname);
            printf("%s\n",lname);
            printf("give Address :");
            scanf("\n%[^\n]s",address);
            printf("%s\n",address);

            buildUserProfile(mail,fname,lname,address);
        }

        if(choice==4)
        {

            char name[MAX_LEN];
            printf("give User Name :");
            scanf("\n%[^\n]s",name);

            searchByName(name);
        }

        if(choice==5)
        {

            char address[MAX_LEN];
            printf("give User Address :");
            scanf("\n%[^\n]s",address);

            searchByAddress(address);
        }
        if (choice==6)
        {
            break;
        }




    }

}
