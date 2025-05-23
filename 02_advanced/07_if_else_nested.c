// 07_if_else_nested.c

#include <stdio.h>

int main()
{
    int num = 10;
    if (num > 0)
    {
        if (num % 2 == 0)
        {
            printf("Even Number \n");
        }
        else
        {
            printf("Odd Number \n");
        }
    } else {
        printf("Invaild Digit");
    }

    return 0;
}