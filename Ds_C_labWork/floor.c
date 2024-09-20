#include <stdio.h>
#include <math.h>

int main()
{
    float val;
    float fVal, cVal;

    printf("Enter a float value: ");
    scanf("%f", &val);

    fVal = floor(val);
    cVal = ceil(val);
    printf("Floor value: %f\nCeiling value: %f\n", fVal, cVal);
    return 0;
}