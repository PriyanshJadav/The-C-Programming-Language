// 03_data_types.c

#include <stdio.h>

int main()
{
    int integer = 15;
    float decimal = 44.4;
    double bigDecimal = 12345.67892;
    char letter = 'z';

    printf("Integer : %d \n", integer);
    printf("Float : %.2f \n", decimal);
    printf("Double : %.5lf \n", bigDecimal);
    printf("Character : %c \n", letter);
}