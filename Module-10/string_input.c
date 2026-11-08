#include<stdio.h>
int main()
{
    char s[20];
    scanf("%s", &s);
    printf("%s\n", s);
    printf("%c\n", s[1]); //char
    printf("%d\n", s[7]); //ascii value
    printf("%c\n", s[7]); //null
    return 0;
}