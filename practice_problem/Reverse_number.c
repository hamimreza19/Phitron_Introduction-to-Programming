#include<stdio.h>
int main()
{
    // int n, rev = 0, rem;
    // scanf("%d", &n);
    // while(n!=0){
    //     rem = n%10;
    //     rev = rev*10 + rem;
    //     n = n/10;
    // }
    // printf("%d", rev);

    //check if the number is palindrome or not
    int m, temp, sum=0;
    scanf("%d", &m);
    temp = m;
    while(m!=0){
        temp = m%10;
        sum = sum*10 + temp;
        m = m/10;
    }
    if(sum==temp){
        printf("\n%d is a palindrome number", temp);
    }
    else{
        printf("\n%d is not a palindrome number", temp);
    }
}