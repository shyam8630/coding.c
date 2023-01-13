#include<stdio.h>
int main()
{ int i,j;

    for(i=1; i<=10; i++)
    {
        printf("%d\n",i);
        for(j=i; j<=i;j++)
        printf(" ");
    }
    return 0;
}