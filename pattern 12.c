//pattern programing//
#include<stdio.h>
int main()
{
    int i,j,k,l;

    for(i=1;i<=10;i++)
    {
        for(j=i;j<=i;j++)
        {
            printf("*");
        }
        for(k=1;k<=8;k++)
        {
            printf(" ");
        }
        for(l=i;l<=i;l++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=10;i++)
    {
        printf("*");
    }
    return 0;
}

