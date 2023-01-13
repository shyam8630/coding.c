//wap to check whether a character is alphavet or not.
#include<stdio.h>
int main()
{
    char ch;
    printf("enter the value\n");
    scanf("%c",&ch);
    if( (ch>= 'a' && ch<='z') )
    {
        printf("char is an alphabet");
    }
    else if( (ch>='A' && ch<='Z') )
    {
        printf("char is an alphabet");
    }
    else
    {
        printf("not alphabet");
    }
    return 0;
}