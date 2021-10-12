//wap to print sum of frist 20 number//

#include<stdio.h>
int main()
{
    int number,sum;

    for(number=1;number<=20;number++)
    {
        sum=sum+number;
    }

    printf("sum of frist 20 number is %d",sum);

    return 0;
}
