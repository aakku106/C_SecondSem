#include <stdio.h>
int main()
{
    int i = 7;
    do
    {
        --i;
        printf("Which Day of a week is today ?\n");
        int num;
        scanf("%d", &num);
        do
        {
            if (num == 3)
            {
                printf("Today is Tuesday\n");
                return 0;
                // // break ;;
            }

        } while (num == 3);
        do
        {
            if (num == 5)
            {
                printf("Today is Thursday\n");
                // break ;;
                return 0;
            }

            // return 0;

        } while (num == 5);
        do
        {
            if (num == 1)
            {
                printf("Today is Sunday\n");
                // break ;;
                return 0;
            }

            // return 0;
        } while (num == 1);
        do
        {
            if (num == 2)
            {
                printf("Today is Monday\n");
                // break ;;
                return 0;
            }

            // return 0;

        } while (num == 2);

        do
        {
            if (num == 4)
            {
                printf("Today is Wednesday\n");
                // break ;;
                return 0;
            }

            // return 0;

        } while (num == 4);
        do
        {
            if (num == 7)
            {
                printf("Today is Saturday\n");
                // break ;;
                return 0;
            }

            // return 0;

        } while (num == 7);

        do
        {
            if (num == 6)
            {
                printf("Today is Friday\n");
                // break ;;
                return 0;
            }

            // return 0;

        } while (num == 6);

        do
        {
            if (num > 7)
            {
                printf("Invalid Input\n");
                // break ;;
                return 0;
            }

        } while (num > 7);

    } while (i > 0);
    return 0;
}