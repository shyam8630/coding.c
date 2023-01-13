//wap to check whether a number is even or odd.
#include<stdio.h>
int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    
    if(num%2==0)
    {
        printf("no is even");
    }
    else
    {
        printf("no is odd");
    }
    return 0;
}