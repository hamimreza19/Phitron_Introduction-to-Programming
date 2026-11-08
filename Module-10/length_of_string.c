#include<stdio.h>
int main()
{
    char s[40];
    gets(s);
    // int count = 0;
    // for(int i=0;s[i]!='\0';i++){
    //     count++;
    // }
    // printf("Length of string : %d", count);

    int sz = strlen(s);
    printf("Length of string : %d", sz);
    return 0;
}