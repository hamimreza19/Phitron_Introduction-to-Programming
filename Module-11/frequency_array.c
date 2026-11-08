#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    int m;
    scanf("%d", &m);
    int freq[100001] = {0};
    for(int i=0;i<n;i++){
       int val = a[i];
       freq[val]++;
        
    }
    for(int i=0;i<=m;i++){
     printf("%d --> %d\n",i,freq[i]);
    }
    
     

    return 0;
}