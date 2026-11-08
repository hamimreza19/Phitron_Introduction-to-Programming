#include<stdio.h>
int main()
{
    char s1[50], s2[55];
    scanf("%s %s", &s1, &s2);
    int len = strlen(s2);
    for(int i=0;i<=len;i++){
        s1[i] = s2[i];
    }

    // strcpy(s1, s2);
    printf("%s %s", s1, s2);
    return 0;
}