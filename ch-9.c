//c program//

#include<stdio.h>
int main()
{
    int i,sub[5],total=0,max=0,min,sum_even=0,sum_odd=0,persentage;

    printf("enter your sub and marks out of 100");
    printf("\n");

    for(i=0;i<5;i++)
    {
        printf("sub is %d\nmarks is ",i+1);
        scanf("%d",&sub[i]);
        total=total+sub[i];

       if(sub[i]>max)
       {
           max=sub[i];
       }

       if(sub[i]<min)
       {
           min=sub[i];
       }

       if(sub[i]%2==0)
       {
           sum_even=sum_even+sub[i];
       }

       if(sub[i]%2!=0)
       {
           sum_odd=sum_odd+sub[i];
       }

    }
    printf("\n");

    for(i=0;i<5;i++)
    {
        printf("sub is %d and marks is %d",i+1,sub[i]);
        printf("\n");

    }

    persentage=total/5;


    printf("total is %d\n",total);

    printf("persentage is %d\n",persentage);

    printf("maximum number is %d\n",max);

    printf("minimum number is %d\n",min);

    printf("even number sum is %d\n",sum_even);

    printf("odd number sum is %d\n",sum_odd);

    return 0;
}

