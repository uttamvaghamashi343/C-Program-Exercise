//distance convert//

#include<stdio.h>
int main()
{
    float kilometer,meter,feet,inch;

    printf("enter a kilometer\n");
    scanf("%f",&kilometer);

    meter=kilometer*1000;
    printf("meter is %f\n",meter);

    feet=kilometer*3280.84;
    printf("feet is %f\n",feet);

    inch=kilometer*39370.1;
    printf("inch is %f\n",inch);


    return 0;
}
