#include<stdio.h>
int num(int n){
   return n;
}
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        printf("%d",i);
        if(i<n){
            printf(" ");
        }
    }
    num(n);
    return 0;
}