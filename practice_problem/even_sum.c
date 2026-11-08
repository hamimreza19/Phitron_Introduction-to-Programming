// sum of even numbers
#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int sum = 0;
 for(int i=1;i<=n;i++){
     if(i%2==0){
         sum = sum + i;
     }
 }
    printf("The sum of %d is : %d\n", n , sum);

    return 0;
}