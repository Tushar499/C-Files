
#include <stdio.h>
#include<string.h>
int main()
{
    char name[20], name2[20];
    printf("Enter first name: ");
    scanf("%s", name);
    printf("Your first name is %s\n", name);
    printf("Enter last name: ");
    scanf("%s", name2);
    printf("Your last name is %s\n", name2);
    printf("the result is: %s",strcat(name,name2));
    return 0;
}

% practice the following operations:
	strlen,strcpy, strcmp, strcat, strncmp, strcmpi, strncat, strstr, strchr, strupr, strlwr, strrev
%