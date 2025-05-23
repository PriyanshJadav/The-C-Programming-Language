// 11_struct_union.c

#include <stdio.h>

struct Student
{
    int id;
    char name[20];
};

int main()
{
    struct Student s1 = {1, "Alice"};
    printf("ID: %d, Name: %s\n", s1.id, s1.name);
    return 0;
}