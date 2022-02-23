#include<stdio.h>
#include<string.h>

typedef struct Student{
    int id;
    char name[50];
    float cgpa;
} student;

void changeName( student *s){
    strcpy(s->name, " Demo");
}

void swapInfo( student *s1, student *s2){
    int temp=s1->id;
    s1->id=s2->id;
    s2->id=temp;

    char temp2[50];
    strcpy(temp2, s1->name);
    strcpy(s1->name, s2->name);
    strcpy(s2->name,temp2);

    float temp3=s1->cgpa;
    s1->cgpa=s2->cgpa;
    s2->cgpa=temp3;
}


int main()
{
       student s1={10, "Mamun", 3.5};

        student s2= {15, "Selim", 3.6};

       printf("%d %s %.2f \n", s1.id, s1.name, s1.cgpa);

       printf("%d %s %.2f\n ", s2.id, s2.name, s2.cgpa);

       swapInfo(&s1, &s2);

        printf("After swaping: \n");
       printf("%d %s %.2f \n", s1.id, s1.name, s1.cgpa);

       printf("%d %s %.2f\n ", s2.id, s2.name, s2.cgpa);

}
