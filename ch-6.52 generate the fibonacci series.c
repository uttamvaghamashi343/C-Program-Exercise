//wap to generate the fibonacci series

#include<stdio.h>
int main()
{
    int i,n,num1=0,num2=1,next_num;

    printf("enter positive number: ");
    scanf("%d",&n);

    printf("fibonacci series: %d %d ",num1,num2);

    next_num=num1+num2;

    while(next_num<n)
    {
        printf("%d ",next_num);
        num1=num2;
        num2=next_num;
        next_num=num1+num2;
    }
    return 0;
}

