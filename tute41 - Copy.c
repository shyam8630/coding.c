#include<stdio.h>
void main()
{
    int a,x;
    char c;
    do
    {
        printf("enter any number=");
        scanf("%d",a);
        x=a*a;
        printf("square=%d\n",x);
        printf("enter choice=");
        scanf("%c",&c);
    }
    while(c=='y');
}