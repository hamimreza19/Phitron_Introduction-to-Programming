// return with no parameter
int sum(){
    int a, b;
    scanf("%d %d", &a, &b);
    int val = a + b;
    return val;
}
int sub(){
    int a, b;
    scanf("%d %d", &a, &b);
    int val1 = a - b;
    return val1;
}
int mul(){
    int a, b;
    scanf("%d %d", &a, &b);
    int val2 = a * b;
    return val2;
}
int div(){
    int a, b;
    scanf("%d %d", &a, &b);
    int val3 = a / b;
    return val3;
}
int mod(){
    int a, b;
    scanf("%d %d", &a, &b);
    int val4 = a % b;
    return val4;
}

#include<stdio.h>
int main()
{
    int val = sum();
    int val1 = sub();
    int val2 = mul();
    int val3 = div();
    int val4 = mod();
    printf("sum = %d\n", val);
    printf("sub = %d\n", val1);
    printf("mul = %d\n", val2);
    printf("div = %d\n", val3);
    printf("mod = %d\n", val4);

    return 0;
}