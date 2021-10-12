//wap to search value using binary search//


#include<stdio.h>
int main()
{
    int i,a[10],n,size,size1;

    printf("enter value for array\n");

    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter value for element\n");
    scanf("%d",&n);
    size=10;

        size1=(size/2)-1;

        if(a[size1]==n)
        {
            printf("value of %d position is %d",n,i);
        }
        if(n>a[size1])
        {
            for(i=size1;i<size;i++)
            {
                if(n==a[i])
                {
                   printf("value of %d position is %d",n,i);
                }
            }
        }

        if(n<a[size1])
        {
            for(i=0;i<size1;i++)
            {
                if(n==a[i])
                {
                    printf("value of %d position is %d",n,i);
                }
            }
        }

  return 0;
}
