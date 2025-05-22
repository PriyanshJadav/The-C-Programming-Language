// 04_input_output.c

#include <stdio.h>

int main()
{
    int age;
    float height;
    
    printf("Enter your age: \n");
    scanf("%d", &age);

    printf("Enter you height: \n");
    scanf("%f", &height);

    printf("You age is %d, and your height is %.2f", age, height);
    return 0;

}