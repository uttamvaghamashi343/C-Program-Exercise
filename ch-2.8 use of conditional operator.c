//max no between two no using conditional operator//

#include<stdio.h>
int  main()
{
    int num1,num2;

    printf("enter two number\n");
    scanf("%d%d",&num1,&num2);

    if(num1>num2)
    {
        printf("max no is %d\n",num1);
    }
    else
    {
        printf("max no is %d\n",num2);
    }

    return 0;
}
