// Take an array from input and count how many 
// odd numbers are present in that array.

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int odd = 0;
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
        if(a[i]%2!=0){
            odd++;
        }
    }
    printf("Odd: %d", odd);
    
    return 0;
}