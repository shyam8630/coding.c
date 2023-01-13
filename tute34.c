//wap to find maximum between 3 no.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    printf("enter the value of c\n");
    scanf("%d",&c);
    
    if(a>b)
    {
        printf("a is gretest");
    }
    else if(b>c)
    {
        printf("b is greatest");
    }
    else
    {
        printf("c is greatest");
    }
    return 0;
} 