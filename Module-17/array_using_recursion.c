#include<stdio.h>

void run_array(int a[], int n, int idx){
       if(idx==n){
        return n;
     }
     printf("%d ", a[idx]);
     run_array(a, n, idx+1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    run_array(a, n, 0);
    return 0;
}