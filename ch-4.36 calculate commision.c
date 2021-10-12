//to enter sales amount of salesman and salary of salesman and calculate commision//

#include<stdio.h>
int main()
{
    int sales,salary,commision,total_salary;

    printf("enter a sales and salary of selesman\n");
    scanf("%d%d",&sales,&salary);

    if(sales>15000)
    {
        commision=(sales*15)/100;
    }
    else if(sales>8000)
    {
        commision=(sales*12)/100;
    }
    else if(sales>5000)
    {
        commision=(sales*10)/100;
    }
    else if(sales<5000)
    {
        commision=(sales*8)/100;
    }

    total_salary=salary+commision;

    printf("your commision is %d\n",commision);
    printf("your total salary is %d\n",total_salary);

    return 0;
}
