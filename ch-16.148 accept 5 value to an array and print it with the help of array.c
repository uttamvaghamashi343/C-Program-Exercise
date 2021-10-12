//wap to accept 5 value to an array & print it with the help of array//

#include<stdio.h>
int main()
{
    int num[10],*p,i;

    printf("enter 5 value:\n");

    for(i=0;i<=4;i++)
    {
        scanf("%d",&num[i]);
    }

    p=&num[0];

    printf("you enter is :\n");

    for(i=0;i<=4;i++)
    {
        printf("%d\n",*p);
        *p++;

    }

    return 0;
}
