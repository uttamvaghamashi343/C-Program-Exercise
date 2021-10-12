//wap to employee id name and basic salary find hra da pf and gross salary//

#include<stdio.h>
int main()
{
    int id,basic,hra,da,pf,gross;

    printf("enetr your employee id\n");
    scanf("%d",&id);

    printf("enetr your basic salary\n");
    scanf("%d",&basic);

    hra=(basic*8)/100;
    da=(basic*40)/100;
    pf=(basic*6)/100;
    gross=basic+hra+da+pf;

    printf("your hra is %d\n",hra);
    printf("your da is %d\n",da);
    printf("your pf is %d\n\n",da);

    printf("your gross salary is %d\n",gross);

    return 0;

}
