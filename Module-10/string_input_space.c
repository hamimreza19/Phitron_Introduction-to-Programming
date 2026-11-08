#include<stdio.h>
int main()
{
    char s[30];
    // gets(s);
    fgets(s, 29, stdin);
    printf("%s", s);

    
    return 0;
}