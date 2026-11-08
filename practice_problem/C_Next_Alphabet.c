#include<stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
  
    if(ch=='z'){
    ch = 'a';
   }
   else if(ch=='Z'){
    ch = 'A';
   }
   else{
    ch = ch + 1;
   }
   

    printf("%c\n", ch);

    return 0;
}