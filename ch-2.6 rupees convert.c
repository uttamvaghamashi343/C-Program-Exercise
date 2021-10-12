//currency convert//

#include<stdio.h>
int main()
{
    float rupees,doller,pound;
    printf("enter a rupees\n");
    scanf("%f",&rupees);

    doller=rupees/70;
    printf("doller is %f\n",doller);

    pound=rupees/100;
    printf("pound is %f\n",pound);

    return 0;

}
