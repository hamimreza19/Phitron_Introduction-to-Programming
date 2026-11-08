
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    int j = 0;

    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            a[j] = i;
            j++;
        }
    }

    for(int i = 0; i < j; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
