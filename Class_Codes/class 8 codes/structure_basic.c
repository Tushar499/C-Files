#include<stdio.h>
#include<string.h>

typedef struct Point
{
    float x;
    float y;
} point;

struct Address{
    int road_no;
    char city[30];
    char country[30];
};

typedef struct Student{
    int id;
    char name[50];
    float cgpa;
    struct Address addr;
} student;

int main()
{
       student s1={10, "Mamun", 3.5, {225, "Dhaka", "BD"}};

       gets(s1.addr.country);

       printf("%d %s %.2f ", s1.id, s1.addr.country, s1.cgpa);
}
