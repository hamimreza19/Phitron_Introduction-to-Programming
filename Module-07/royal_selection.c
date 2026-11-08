#include <stdio.h>
int main()
{
    int A;
    scanf("%d", &A);
    int I;
    scanf("%d", &I);
    int P;
    scanf("%d", &P);
    int E;
    scanf("%d", &E);
    if (A >= 21 && A <= 35 && I >= 80 && I <= 100 && P >= 70 && P <= 100 && E >= 0)
    {

        if ((A >= 30 && I >= 95 && P >= 90) ||
            (I >= 80 && P >= 70 && E >= 2))
        {
            printf("Selected\n");
        }
        else
        {
            printf("Rejected\n");
        }
    }
    else
    {
        printf("Rejected\n");
    }
}