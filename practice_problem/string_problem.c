#include<stdio.h>
#include<string.h>
int main()
{
    char a[333], b[234];
    scanf("%s %s", &a, &b);
    int len = strlen(b);
    // strcpy(a,b);
    
    // printf("%s %s\n", a, b);
    strcat(a,b);
    printf("%s %s", a, b);
    
    return 0;
}