//wap to create a pointer array and find sum of array 1D//

#include<stdio.h>
int main()
{
    int num[100],i,*p,sum=0;

    printf("enter five integer value:\n");

    for(i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }

    p=&num[0];

    for(i=0;i<5;i++)
    {
        sum = sum + *p;
        *p++;
    }
    printf("\nsum is %d:",sum);

    return 0;
}
