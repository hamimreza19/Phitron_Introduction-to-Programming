#include<stdio.h>
int main()
{
    // int i = 1;
    // while(i<=10){
    //     printf("%d\n", i);
    //     i++;
    // }
    // printf("Great\n");

    // int j = 1;
    // while(j<=10){
    //     if(j==5){
    //         break;
    //     }
    //     printf("%d\n", j);
    //     j++;
    // }
    // int n;
    // scanf("%d", &n);
    // int sum = 0;
    // for(int i=1;i<=n;i++){
    //     sum = sum + i;
    // }
    // printf("%d\n", sum);
    int n;
    scanf("%d", &n);
    int sum = 0;
    int i = 1;
    while(i<=n){
        sum = sum + i;
        i++;
    }
    printf("%d\n", sum);

}