//check if a number is even or odd
//if odd then it is divisible by 3
// if even then it is divisible by 6
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n%2==0){
        printf("Even\n");
    if(n%6==0){
        printf("Divisible by 6\n");
    }
    else{
        printf("Not Divisible by 6\n");

    }
    }
    else{
        printf("Odd\n");
        if(n%3==0){
            printf("Divisible by 3\n");
        }
        else{
            printf("Not Divisible by 3\n"); 
        }
    }
    return 0;


}