// 09_arrays_strings.c

#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    char str[] = "Hello";
    printf("%s\n", str);
    return 0;
}