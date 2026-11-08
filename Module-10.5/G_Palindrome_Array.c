#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int copy[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
        copy[i] = a[i];
    }
    int j=0;
    int k = n-1;
    while(j<k){
        int temp = a[j];
        a[j] = a[k];
        a[k] = temp;
        j++;
        k--;
    }
    int isPalindrome = 1;
    for(int i=0;i<n;i++){
        if(copy[i]!=a[i]){
            isPalindrome = 0;
            break;
        }
       
    }
    if(isPalindrome==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
   
    return 0;
}