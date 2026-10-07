// sum of even numbers
#include <stdio.h>
int main()
{
  int n;
  scanf("%d", n);
  int sum = 0;
    for(int i=2;i<=n;i++){
       int sum = sum + i;
       printf("%d\n",sum);
    }
    

    return 0;
}