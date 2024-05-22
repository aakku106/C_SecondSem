#include <stdio.h>
void main()
{
    int n, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    printf("The sum of odd numbers upto %d is %d \n", n, sum);
}