#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    a= a/1000;
    if(a%2==0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
    return 0;
}