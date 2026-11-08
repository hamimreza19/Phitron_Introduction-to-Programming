#include<stdio.h>
int main()
{
    char a[100], b[102];
    scanf("%s %s", &a, &b);
    int val = strcmp(a, b);
    if(val<0){
        printf("A is smaller\n");
    }else if(val==0){
        printf("Equal");
    }else{
        printf("B is smaller");
    }
    
    return 0;
}