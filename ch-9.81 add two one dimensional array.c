#include<stdio.h>
int main()
{
    int i,a[5],b[5],c[5],n;

    for(i=0;i<5;i++)
    {
        printf("a[%d]: ",i+1);
        scanf("%d",&a[i]);
        printf("b[%d]: ",i+1);
        scanf("%d",&b[i]);
        printf("\n");
    }

    printf("sum of two array\n");

    for(i=0;i<5;i++)
    {
        c[i]=a[i]+b[i];
        printf("c[%d]: %d\n",i+1,c[i]);
    }


    return 0;


}

