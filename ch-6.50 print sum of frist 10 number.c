//wap to print sum of first 10 number//

#include<stdio.h>
int main()
{
    int number,sum;

    for(number=1;number<=10;number++)
    {
        sum=sum+number;
    }

    printf("sum of frist 10 number is %d",sum);

    return 0;
}
