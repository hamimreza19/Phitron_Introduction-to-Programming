int sum(int num1, int num2){
    int res = num1 + num2;
    return res;
}
int sub(int num1, int num2){
    int res = num1 - num2;
    return res;
}
int mul(int num1, int num2){
    int res = num1 * num2;
    return res;
}
int div(int num1, int num2){
    int res = num1 / num2;
    return res;
}
int mod(int num1, int num2){
    int res = num1 % num2;
    return res;
}
#include<stdio.h>
int main()
{
    int a ,b;
    scanf("%d %d", &a, &b);
    int res = sum(a,b);
    int res1 = sub(a,b);
    int res2 = mul(a,b);
    int res3 = div(a,b);
    int res4 = mod(a,b);
    printf("sum = %d\n", res);
    printf("sub = %d\n", res1);
    printf("mul = %d\n", res2);
    printf("div = %d\n", res3);
    printf("mod = %d\n", res4);

    return 0;
}