#include<stdio.h>
void hello(int i){
    if(i==7){
        return;
    }
   hello(i+1); // reverse print
    printf("%d\n", i);
}
int main()
{
    int i=1;
    hello(i);
    return 0;
}