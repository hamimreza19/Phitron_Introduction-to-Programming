#include <stdio.h>

int main()
{
int i = 1;

    while (i < 13)
    {
        

        if (i % 2 == 0)
            continue;

        if(i==7)
            continue;

             if (i == 12)
            break;

        printf("%d ", i);
    }



    return 0;
}