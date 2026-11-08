#include<stdio.h>
void test(int a[], int n){
   for(int i=0;i<n;i++){
    printf("%p ", a);
    printf("%d ", a[i]);
   }
   
}
int main()
{
    int n;
    scanf("%d", &n);
   
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    test(a, n);
        
    return 0;
}