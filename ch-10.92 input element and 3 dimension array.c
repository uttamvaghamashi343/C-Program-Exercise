//wap to input element and display it 3 dimension array//

#include<stdio.h>
int main()
{
    int a[2][3][2],i,j,k;

    printf("enter value for 3 dimension array\n");

    for(i=0;i<=1;i++)
    {
        for(j=0;j<=2;j++)
        {
            for(k=0;k<=1;k++)
            {
                scanf("%d",&a[i][j][k]);
            }
        }
    }

    printf("you entered is\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=2;j++)
        {
            for(k=0;k<=1;k++)
            {
                printf("a[%d][%d][%d] : %d  \n",i,j,k,a[i][j][k]);
            }

        }

    }

    return 0;
}
