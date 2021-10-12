//wap to fibonacci series using for loop//

#include<stdio.h>
int main()
{
    int i,n,num1=0,num2=1,next_num;

    printf("enter the number of term: ");
    scanf("%d",&n);

    printf("fibonacci series: ");

    for(i=1;i<=n;i++)
    {
        printf(" %d ",num1);
        next_num=num1+num2;
        num1=num2;
        num2=next_num;
    }
    return 0;
}
