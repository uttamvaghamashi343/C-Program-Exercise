//check whether entered value is more then 100 or not//

#include<stdio.h>
int  main()
{
    int number;

    printf("enter a number\n");
    scanf("%d",&number);

    if(number>100)
    {
        printf("value is more then 100");
    }
    else
    {
        printf("value is not more then 100");
    }
    return 0;
}
