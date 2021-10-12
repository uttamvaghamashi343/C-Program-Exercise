//wap to input any array value yhen total number number of even and total number of odd using 2 dimensional array//

#include<stdio.h>
int main()
{
    int a[3][3],i,j;

    printf("enter value for array\n");

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\neven number is\n");

     for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(a[i][j]%2==0)
            {
                printf("%d ",a[i][j]);
            }
        }
    }

    printf("\nodd number is\n");

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(a[i][j]%2!=0)
            {
                printf("%d ",a[i][j]);
            }
        }
    }


    return 0;

}

