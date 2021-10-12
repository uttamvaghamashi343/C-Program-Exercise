//wap to print all prime number between 1 to 100//

#include<stdio.h>
int main()
{
    int number,i,count;

    printf("enter any number\n");
    scanf("%d",&number);

    count=0;
    for(i=1;i<=number;i++)
    {
        if(number%i==0)

        {
            count++;
        }

    }
    if(count<=2)
    {
        printf("this number is prime");
    }
    else
    {
        printf("this number is not prime");
    }

    return 0;
}
