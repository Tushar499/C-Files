
/* C Program to Perform Division and Modulus on Float data type */

#include<stdio.h>

int main()
{
 int a = 7, b = 3;
 int integerdiv, modulus;
 float floatdiv;

 integerdiv = a / b; // dividing 7 by 3
 modulus = a % b; // calculation the remainder
 floatdiv = (float)a / b; // Converting int to float

 printf("Division of two numbers a, b is : %d\n", integerdiv);
 printf("Modulus of two numbers a, b is : %d\n", modulus);

 printf("---------Correct Results is------- \n");
 printf("Division of two numbers a, b is : %f\n", floatdiv);

}
