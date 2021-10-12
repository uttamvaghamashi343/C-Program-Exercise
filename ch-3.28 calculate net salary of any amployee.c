//net salary of any employee//

#include<stdio.h>
int main()
{
    float basic,net,gross,diduction,hra,pf,da,medical,insurance;

    printf("enter your basic salary \n");
    scanf("%f",&basic);

    da=(basic*50)/100;
    hra=(basic*10)/100;
    medical=(basic*4)/100;
    pf=(basic*5)/100;
    gross=basic+hra+da+medical;
    insurance=(gross*7)/100;
    diduction=insurance+pf;
    net=gross-diduction;


    printf("your da is %f\n",da);
    printf("your hra is %f\n",hra);
    printf("your medical is %f\n",medical);
    printf("your gross salary is %f\n",gross);
    printf("your insurance is %f\n",insurance);
    printf("your diduction is %f\n\n\n",diduction);

    printf("your net salalry is %f\n",net);

    return 0;


}
