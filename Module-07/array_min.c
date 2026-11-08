#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int min = 9999;
    for(int i=0; i<n;i++){
        scanf("%d", &a[i]);
        if(a[i]<min){
            min = a[i];
        }
    }
    printf("Minimum array : %d",min);
    return 0;
}