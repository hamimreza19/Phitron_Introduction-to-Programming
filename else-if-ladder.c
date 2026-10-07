#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if(tk>=500){
    printf("I will eat burger\n");
   
    }
    else if(tk<200 && tk>=50){
        printf("I will eat pizza\n");
    }
    else{
        printf("Nothing eat");
    }
    return 0;
}