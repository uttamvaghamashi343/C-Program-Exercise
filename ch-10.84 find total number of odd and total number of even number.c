//wap to find total number of even and total number of odd number//

#include<stdio.h>
int main()
{
    int i,number[10],sum_odd=0,sum_even=0,total=0;

    printf("enter 10 number\n");

    for(i=0;i<10;i++)
    {
        printf("a[%d] : ",i+1);
        scanf("%d",&number[i]);

        total=total+number[i];

        if(number[i]%2==0)
        {
            sum_odd=sum_odd+number[i];
        }

        if(number[i]%2!=0)
        {
            sum_even=sum_even+number[i];
        }
    }

    printf("even number is : ");
    for(i=0;i<10;i++)
    {
        if(number[i]%2==0)
        {
            printf(" %d ",number[i]);
        }
    }

    printf("\nodd number is : ");
    for(i=0;i<10;i++)
    {
        if(number[i]%2!=0)
        {
            printf(" %d ",number[i]);
        }
    }

    printf("\ntotal is %d\n",total);

    printf("sum of odd number is %d\n",sum_odd);

    printf("sum of even number is %d\n",sum_even);

    return 0;
}
