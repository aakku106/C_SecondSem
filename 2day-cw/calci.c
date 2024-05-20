#include <string.h>
#include <stdio.h>
void main()
{
    int a, b, sum, sub, mul, div, mod;
    printf("enter two numbers");
    scanf(" %d %d", &a, &b);
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    mod = a % b;
    printf("sum=%d \n sub=%d \n mul=%d \n div=%d \n mod=%d \n", sum, sub, mul, div, mod);
}