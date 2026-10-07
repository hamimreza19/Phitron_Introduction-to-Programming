// Write a C program that will take 2 numbers from 
// the user and then print the 2nd number first 
// and then first number.  

#include<stdio.h>
int main()
{
    int i1, i2;
    scanf("%d %d", &i1, &i2);
    printf("%d\n" "%d\n", i2, i1);
    return 0;

}