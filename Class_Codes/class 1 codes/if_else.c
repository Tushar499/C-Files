
/* Program for If Else Statement in C language */

#include<stdio.h>

int main()
{
 int marks;

 printf("Enter you subject Marks:\n");
 scanf("%d",&marks);

 if(marks >= 80)
  {
    printf("A+\n"); //s1

  }
  else if ( marks >=65){
    printf("A-\n"); //s1
  }
 else
  {
    printf("You Failed\n");//s3
    printf("Better Luck Next Time");//s4
  }
 return 0;
}
