//Count Positive, 
//Negative and Zero
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int pos =0, neg = 0, zero = 0;
    for(int i=1;i<=n;i++){
        int num;
        scanf("%d", &num);
        if(num>0){
            pos++;
        }
        else if(num<0){
            neg++;
        }
        else{
            zero++;
        }

    }
    printf("positive : %d\n", pos);
    printf("negative : %d\n", neg);
    printf("zero : %d\n", zero);
}