#include<stdio.h>

void run(int n, int i){
    if(i==n){
        return;
    }
    printf("I love Recursion\n");
    run(n, i + 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    run(n, 0);

    return 0;
}