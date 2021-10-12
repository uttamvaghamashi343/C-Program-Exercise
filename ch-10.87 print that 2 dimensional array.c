//wap to input any array value then print that 2 dimensional array//


#include<stdio.h>
int main()
{
    int i,j,a[3][3],b[3][3],c[3][3];

    printf("enter value for first matrix\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("enter value for second matrix\n");

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("sum of two matrix\n");

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%2d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

