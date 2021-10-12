//wap to input array value and then print sum of total number of odd and total number of even//

#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum_even=0,sum_odd=0;

    printf("enter value for array\n");

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("even  number is : ");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(a[i][j]%2==0)
            {
            printf(" %d ",a[i][j]);
            }
        }
    }

    printf("\nodd  number is : ");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(a[i][j]%2!=0)
            {
            printf(" %d ",a[i][j]);
            }
        }
    }



     for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(a[i][j]%2==0)
            {
                sum_even=sum_even+a[i][j];
            }
            else if(a[i][j]%2!=0)
            {
                sum_odd=sum_odd+a[i][j];
            }


        }

    }

    printf("\nsum of even number is %d\n",sum_even);
    printf("sum of odd number is %d\n",sum_odd);

    return 0;

}

