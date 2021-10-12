//wap to input array value then find location of array of user value//

#include<stdio.h>
int main()
{
    int a[3][4],i,j,n;

    printf("enter value for array\n");

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

      printf("enter element for position\n");
      scanf("%d",&n);

     for(i=0;i<=2;i++)
    {
        for(j=0;j<=3;j++)
        {
            if(n==a[i][j])
            {
            printf("a[%d][%d] : %d   ",i,j,a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
