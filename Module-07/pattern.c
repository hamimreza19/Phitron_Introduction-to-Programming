// 5 4 3 2 1
// 4 3 2 1
// 3 2 1
// 2 1
// 1
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
