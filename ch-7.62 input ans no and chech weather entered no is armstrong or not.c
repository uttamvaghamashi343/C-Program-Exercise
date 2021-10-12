//wap to input ans no and check wether entered no is armstrong or not//

#include<stdio.h>
int main()
{
    int number,sum,div,t;

    printf("enetr any number\n");
    scanf("%d",&number);
    t=number;
    sum=0;
    while(number>0)
    {
        div=number%10;
        sum=sum+div*div*div;
        number=number/10;
    }

    if(t==sum)
    {
        printf("this is armstorng number\n");
        printf("ans is %d\n",sum);
    }
    else
    {
        printf("this is not armstorng number\n");
    }

    return 0;
}
