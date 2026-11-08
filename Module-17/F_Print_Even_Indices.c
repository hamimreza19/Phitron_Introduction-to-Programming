#include<stdio.h>
   int n;
    long long a[1008];
void indices(int i){
    if(i>=n){
        return;
    }
    indices(i+2);
    printf("%lld ", a[i]);

}
int main()
{
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%lld", &a[i]);
    }
    indices(0);
    printf("\n");
    return 0;
}