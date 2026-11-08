#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    int flag = 0;
    for(int i=0;i<n;i++){
        for(int j= i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                flag = 1;
            }
           }
        }
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }

    return 0;
}