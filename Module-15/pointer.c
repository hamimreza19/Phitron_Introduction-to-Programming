#include<stdio.h>
int main()
{
    int x = 10;
    printf("%d\n", x);
    int* ptr = &x;
    *ptr = 30;
    printf("%p\n", ptr);
    printf("%d\n", *ptr); //dreference operator

    printf("%p\n", &ptr);
    printf("%p\n", &x);
    return 0;
}