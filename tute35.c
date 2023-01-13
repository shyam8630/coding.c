//wap to find check whether a no is negative positive zero.
#include<stdio.h>
int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    if(num>0)
    {
        printf("no is positive");
    }
    else if(num<0)
    {
        printf("no is negative");
    }
    else
    {
        printf("no is zero");
    }
    return 0;

}