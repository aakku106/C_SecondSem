#include <stdio.h>
#include <string.h>
void main()
{
    int age;
    char a;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Are you from Nepali (Y/N)\n");
    scanf(" %c", &a);
    if (a == 'Y' || a == 'y')
    {
        if (age >= 18)
        {
            printf("You are eligible to Drive\n");
        }
        else
        {
            printf("You are not eligible to drive\n");
        }
    }
    else
    {
        printf("You are not Nepali\n");
    }
    //   next();
}
void next()
{

    int age;
    char a[10];
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("From  Which country are you from: \n");
    scanf("%s", a);
    if (strcmp(a, "Nepali") == 0)
    {
        if (age >= 18)
        {
            printf("You are eligible to Drive\n");
        }
        else
        {
            printf("You are not eligible to drive\n");
        }
    }
    else
    {
        printf("You are not Nepali\n");
    }
}