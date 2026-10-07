
#include <stdio.h>

int main()
{
    int marks, attendance, income, skill;

    scanf("%d %d %d %d", &marks, &attendance, &income, &skill);

    if (marks >= 80)
    {
        if (attendance >= 85)
        {
            if (income <= 30000)
            {
                if (skill >= 7)
                {
                    printf("Full Scholarship\n");
                }
                else
                {
                    printf("Partial Scholarship\n");
                }
            }
            else
            {
                if (skill >= 8)
                {
                    printf("Merit Scholarship\n");
                }
                else
                {
                    printf("No Scholarship\n");
                }
            }
        }
        else
        {
            printf("Improve Attendance\n");
        }
    }
    else if (marks >= 60)
    {
        if (attendance >= 80)
        {
            if (income <= 20000)
            {
                printf("Need-Based Scholarship\n");
            }
            else
            {
                printf("No Scholarship\n");
            }
        }
        else
        {
            printf("Improve Attendance\n");
        }
    }
    else
    {
        if (skill >= 9)
        {
            if (attendance >= 75)
            {
                printf("Special Skill Scholarship\n");
            }
            else
            {
                printf("Improve Attendance\n");
            }
        }
        else
        {
            printf("Not Eligible\n");
        }
    }

    return 0;
}