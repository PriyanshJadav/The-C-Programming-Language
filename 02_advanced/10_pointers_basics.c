// 10_pointers_basics.c

#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;
    printf("Value: %d, Address: %p\n", *p, (void *)p);
    return 0;
}
