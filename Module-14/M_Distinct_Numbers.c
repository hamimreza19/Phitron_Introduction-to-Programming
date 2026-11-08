int distinct_num(int a[], int n){
     int count=0;
    for(int i=0;i<n;i++){
        int distinct = 0;
        for(int j=0;j<i;j++){
            if(a[i] == a[j]){
                distinct = 1;
                break;
            }
        }
        if(distinct == 0){
            count++;
        }
    }
    // printf("%d", count);
    return count;
}
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
 int res = distinct_num(a, n);
 printf("%d", res);
    return 0;
}