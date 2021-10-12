//pattern programing//

#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=1;i<=7;i++)
    {
        printf("*");
    }
    printf("\n");

    for(i=1;i<=7;i++)
    {
        for(j=6;j>=i;j--)
        {
            printf(" ");
        }
        for(k=i;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;

}

