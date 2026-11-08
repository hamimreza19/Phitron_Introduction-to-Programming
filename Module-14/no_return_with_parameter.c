void sum(int a, int b){
    int val = a + b;
printf("sum = %d\n", val);
}

#include<stdio.h>
int main()
{
    int a , b;
    scanf("%d %d", &a, &b);
    sum(a,b);
    printf("you pass the math");
    return 0;
}