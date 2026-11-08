#include<stdio.h>
void tour(){
    printf("Tour to usa\n");  
}
void sleep(){
    printf("Take rest\n");
    tour();
}
void eat(){
    printf("Pizza\n");
    sleep();
}
int main()
{
    printf("Hey there\n");
    eat();
    
    return 0;
}