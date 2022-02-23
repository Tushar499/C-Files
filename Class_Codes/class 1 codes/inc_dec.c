/* Increment and Decrement Operators in C as Prefix and Postfix */

#include<stdio.h>

int main()
{

 int x = 10,y = 20, a = 5, b= 4;

 printf("---- PRE INCREMENT OPERATOR EXAMPLE---- \n");
 printf("Value of x : %d \n", x); //Original Value
 printf("Value of x : %d \n", ++x); // using Pre increment Operator
 printf("Value of x Incremented : %d \n", x); //Incremented value

 printf("----POST INCREMENT OPERATOR EXAMPLE---- \n");
 printf("Value of y : %d \n", y); //Original Value
 printf("Value of y : %d \n", y++); // using Post increment Operator
 printf("Value of Incremented y : %d \n", y); //Incremented value

 printf("----PRE DECREMENT OPERATOR EXAMPLE---- \n");
 printf("Value of a : %d \n", a); //Original Value
 printf("Value of a : %d \n", --a); // using Pre decrement Operator
 printf("Value of decremented y : %d \n", a); //decremented value

 printf("----POST DECREMENT OPERATOR EXAMPLE---- \n");
 printf("Value of b : %d \n", b); //Original Value
 printf("Value of b : %d \n", b--); // using Post decrement Operator
 printf("Value of decremented b : %d \n", b); //decremented value

 return 0;
 }
