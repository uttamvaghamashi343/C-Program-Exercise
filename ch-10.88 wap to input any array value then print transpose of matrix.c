//wap to input any array value then print transpose of matrix//

#include<stdio.h>
int main()
{
    int i,j,a[3][3],transpose[3][3],r,c;

    printf("enter rows and columns of matrix\n");
    scanf("%d%d",&r,&c);


    printf("enter element of matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }

     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("a[%d][%d] : %d  ",i,j,a[i][j]);
        }
        printf("\n");

    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            transpose[j][i]=a[i][j];
        }
    }
    printf("transpose of matrix:\n");

    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("transpose[%d][%d] : %d   ",i,j,transpose[i][j]);
        }
        printf("\n");
    }

    return 0;

}
