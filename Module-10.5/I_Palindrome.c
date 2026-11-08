#include<stdio.h>
int main()
{
    char s[1002];
    scanf("%s", &s);
    int len = strlen(s);
    int isPalindrome = 1;
    for(int i=0,j=len-1;i<j;i++,j--){
        if(s[i]!=s[j]){
            isPalindrome = 0;
            printf("NO");
            break;
        }
    }
    if(isPalindrome==1){
        printf("YES");
    }
}