#include <string.h>
#include <stdio.h>
void main()
{
    char c;
    printf("m= male \n f= female \n or others \n");
    scanf(" %c", &c);
    (c == 'm') ? printf("Male") : (c == 'f') ? printf("Female"): printf("Others");
}