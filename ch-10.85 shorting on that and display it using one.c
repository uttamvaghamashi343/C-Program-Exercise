//wap to input any array value and perform shorting that and display it using one//

//wap to find assending and disending order//

#include<stdio.h>
int main()
{
    int i,j,temp,a[10];

    printf("enter 10 number\n");

    for(i=0;i<10;i++)
    {
        printf("number %d is ",i+1);
        scanf("%d",&a[i]);
    }

    printf("assending number is \n");
    for(i=0;i<10;i++)
    {
        for(j=i;j<10;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        printf(" %d\n",a[i]);
    }

    printf("disending number is \n");
    for(i=0;i<10;i++)
    {
        for(j=i;j<10;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        printf(" %d\n",a[i]);
    }
    return 0;
}


