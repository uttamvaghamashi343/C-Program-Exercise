//wap to printing address of array//

#include<stdio.h>
int main()
{
    int num[10],*p,i;

    printf("enter 5 number:\n");

    for(i=0;i<=4;i++)
    {
        scanf("%d",&num[i]);
    }

    p=&num[0];

    for(i=0;i<=4;i++)
    {
        printf("%d address is %d\n",*p,p);
        *p++;
    }
    return 0;
}
