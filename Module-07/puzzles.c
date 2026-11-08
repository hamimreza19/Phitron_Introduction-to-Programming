// Input
// Only one line containing four numbers a
// , b
// , c
//  and d
//  (−109≤a,b,c≤109
// ),(−1018≤d≤1018
// ).

// Output
// Print "YES" (without quotes) if you get the fourth number using arithmetic operators, 
// otherwise, print "NO" (without quotes).
#include<stdio.h>
int main()
{
    long long a,b,c,d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    if(a+b+c==d || a*b*c==d || a-b-c==d || a*b-c==d || 
        a-b*c==d || a*b+c==d || a+b*c==d ||
         a-b+c==d || a+b-c==d || a*b+c==d || 
         a*b-c==d || a-b*c==d || a+b*c==d){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}