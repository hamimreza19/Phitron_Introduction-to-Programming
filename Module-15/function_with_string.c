#include<stdio.h>

void fun(char s[]){
    printf("%s\n", s);
    printf("%d\n", strlen(s));
    printf("%p\n", s);
    printf("%p\n", *s);
}
int main()
{
    char s[20];
    scanf("%s", s);
    fun(s);
    return 0;
}