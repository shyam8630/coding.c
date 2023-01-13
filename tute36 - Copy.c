//wap to check whether a num is divisible by 5 and 11 or not.
#include<stdio.h>
int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d",&num);

    if(num%5==0)
    {
        printf("no is divisible by 5");
    }
    else if(num%11==0)
    {
        printf("no is divisible by 11");
    }
    else
    {
        printf("not divisible");
    }
    return 0;
}