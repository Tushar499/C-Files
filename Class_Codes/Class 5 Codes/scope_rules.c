
#include <stdio.h>

/* global variable declaration */
float a = 20;

float sum(float d, float e) ;   //function declaration/ prototyping

int main () {

  /* local variable declaration in main function */
  printf ("value of a in main() before local declaration = %f\n",  a);

  float a = 10;
  float b = 30;
  float c = 0;

  printf ("value of a in main() after local declaration= %f\n",  a);
  c = sum( a, b);
  printf ("value of c in main() = %f\n",  c);

  return 0;
}


float doubleNumber(float x){
    return 2*x;
}

float sum(float d, float e) {       // function definition

    printf ("value of a in sum() = %f\n",  a);


   printf ("value of d in sum() = %f\n",  d);
   printf ("value of e in sum() = %f\n",  e);

   return doubleNumber( d + e);
}




