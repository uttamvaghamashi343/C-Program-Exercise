//find maximum number between two number using conditional operator//

#include<stdio.h>
int main()
{
    int num1,num2,max;

    printf("enter a two number\n");
    scanf("%d%d",&num1,&num2);

    max=(num1>num2)?num1:num2;

    printf("maximum number is %d",max);

    return 0;
}
