#include <stdio.h>
int main()
{
    int num, i = 0;
    printf("How many numbers we have ?\n");
    scanf("%d", &num);

    while (num > i)
    {
        ++i;
        int n;
        printf("Enter the numbers 0 to 3\n");
        scanf("%d", &n);
        while (n == 0)
        {
            printf("You have entered zero <0>\n");
            break;
            return 0;
        }
        while (n == 3)
        {
            printf(" you have entered three <3>\n");
            break;
            return 0;
        }
        while (n == 1)
        {
            printf("You have entered One <1>\n");
            break;
            return 0;
        }
        while (n == 2)
        {
            printf("You have entered Two <2>\n");
            break;
            return 0;
        }
    }
}