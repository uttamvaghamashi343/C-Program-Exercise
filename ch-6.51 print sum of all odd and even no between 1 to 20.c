//wap to print sum of all  odd and even no between 1 to 20//

#include<stdio.h>
int main()
{
    int number,sum_odd,sum_even,sum;

    for(number=1;number<=20;number++)
    {
        if(number%2==0)
        {
            sum_odd=sum_odd+number;
        }
        else if(number%2!=0)
        {
            sum_even=sum_even+number;
        }
    }
    printf("sum of odd number is %d\n",sum_odd);
    printf("sum of even number is %d\n",sum_even);

    sum=sum_odd+sum_even;

    printf("sum of frist 20 number is %d",sum);

    return 0;
}

