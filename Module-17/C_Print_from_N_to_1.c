#include<stdio.h>

void reverse(int n, int i){
    if(i>n){
        return;
    }
    reverse(n, i+1);
    
     if(i!=n){
        printf(" ");
    }
    printf("%d", i);
    
}
int main()
{
    int n;
    scanf("%d", &n);
    reverse(n, 1);
    printf("\n");
    return 0;
}