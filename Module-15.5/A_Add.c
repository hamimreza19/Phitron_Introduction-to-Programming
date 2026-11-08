#include<stdio.h>
int Add(int x, int y){
    return x+y;
}
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int res = Add(x,y);
    printf("%d", res);
    return 0;
}