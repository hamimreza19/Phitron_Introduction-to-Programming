#include<stdio.h>
int main()
{
    int arr[5] = {20, 30, 40, 50, 60};
    for(int i = 0; i < 5; i++){
         printf("Addresses: %d\n", &arr[i]);
    }
    int a[6]={1, 2, 3, 4, 5, 6};
    printf("%p\n", a); // address of first element
    *(a+1) = 10;
    printf("%d\n", a[1]); // array indexing
    printf("%d\n", *a); // dereference
   
    int arr2[5] = {11, 22, 33, 44, 55};
    *(arr2 + 2) = 100;
    *(arr2 + 3) = 60;
    for(int i=0;i<5;i++){
        printf("%d ", arr2[i]);
    }
    return 0;
}