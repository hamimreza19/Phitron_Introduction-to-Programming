#include<stdio.h>

void fun(int x){
     x = 20;
printf("Function address of x is: %p\n", &x);
}
int main()
{
    int x = 10;
    fun(x);
printf("Main function address of x is: %p\n", &x);
    return 0;
}