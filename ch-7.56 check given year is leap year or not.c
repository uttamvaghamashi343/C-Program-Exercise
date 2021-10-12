//wap to check given  year is leap year or not//

#include<stdio.h>
int main()
{
    int number;

    printf("enter any year\n");
    scanf("%d",&number);

    if(number%4==0)
    {
        printf("this year is leap year");
    }
    else
    {
        printf("this year is not leap year");
    }

    return 0;
}
