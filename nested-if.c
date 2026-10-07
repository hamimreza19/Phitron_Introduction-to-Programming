#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 5000)
    {
        printf("Cox's Bazar tour\n");
        if (tk >= 8000)
        {
            printf("Saint martin's tour\n");
            if (tk >= 10000)
            {
                printf("sajek tour\n");
            }
            else{
                printf("no sajek tour\n");
            }
            if(tk >= 6000){
                printf("sunamganj tour\n");
            }
            else{
                printf("no sunamganj tour\n");
            }
        }
    }
    else if (tk >= 3000)
    {
        printf("Sundarban tour");
    }
    else
    {
        printf("no tour");
    }
    return 0;
}