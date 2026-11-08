#include<stdio.h>
int x = 20; // global variable

int sum(){
    int x = 10; // local variable
   printf("function : %d\n", x);
}
void m(){
    printf("Hi");

}
int main()
{
  
    printf("main : %d\n", x);
    sum();
    return 0;
}