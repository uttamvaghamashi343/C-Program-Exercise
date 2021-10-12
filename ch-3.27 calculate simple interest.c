//calculate simple interest//

#include<stdio.h>
int main()
{
    float total,interest,rupees;

    printf("enter a rupees and interest\n");
    scanf("%f%f",&rupees,&interest);

    total=(rupees*interest)/100;
    printf("simple interest is %.2f\n",total);

    return 0;
}
