//calculate su of an  individual digit of given number//

#include<stdio.h>
int main()
{
    int number,sum,div;

    printf("enter any number\n");
    scanf("%d",&number);

    sum=0;

    while(number>0)
    {
        div=number%10;
        sum=sum+div;
        number=number/10;
    }
    printf("sum of an individual digit is %d",sum);

    return 0;
}
