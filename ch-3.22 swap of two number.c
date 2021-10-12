//swap of two number//

#include<stdio.h>
int main()
{
    int a,b,c;

    printf("enter value of a and b\n");
    scanf("%d%d",&a,&b);

    printf("before swapping\n first number = %d\n second number = %d\n",a,b);

    c=a;
    a=b;
    b=c;

    printf("after swapping\n first number = %d\n second number = %d\n",a,b);

    return 0;

}
