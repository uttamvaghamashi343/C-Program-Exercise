//double pointer//

#include<stdio.h>
int main()
{
    int number=50;
    int *p1;
    int **p2;

    p1=&number;
    p2=&p1;

    printf("\nadderss of number variable is : %x",&number);
    printf("\nadderss of p1 variable is : %x",p1);
    printf("\nvalue of *p1 variable is : %d",*p1);
    printf("\nadderss of p2 variable is : %x",p2);
    printf("\nvalue of *p2 variable is : %d",*p1);

    return 0;
}
