#include<stdio.h>
#include<math.h>
int main()
{
    int val = ceil(5.24354);
    printf("%d\n", val);
    int val1 = floor(5.99763);
    printf("%d\n", val1);
    int val2 = round(7.4);
    printf("%d\n", val2);
    double val3 = sqrt(20);
    printf("%lf\n", val3);
    int val4 = pow(2, 3);
    printf("%d\n", val4);
    int val5 = abs(-5);
    printf("%d\n", val5);
    int val6 = fmax(5, 10);
    printf("%d\n", val6);
    return 0;
}