//pattern programing//

#include<stdio.h>
int main()

{
    int i,j,k;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(k=5;k>=1;k--)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;


}

