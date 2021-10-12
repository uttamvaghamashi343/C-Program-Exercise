//display generate number between  two numbers using if-else//

#include<stdio.h>
int main()
{
    int num1,num2;

    printf("enter two number\n");
    scanf("%d%d",&num1,&num2);

    if(num1>num2)
    {
        printf("greater number is %d\n",num1);
    }
    else
    {
        printf("greater number is %d\n",num2);
    }
    return 0;
}
