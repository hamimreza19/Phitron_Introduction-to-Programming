//even odd problem with function

int even_odd(int n){
    if(n%2==0){
        return 1;
    }
    else{
        return 0;
    }
}

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(even_odd(n)){
        printf("%d is even", n);
    }
    else{
        printf("%d is odd", n);
    }

}