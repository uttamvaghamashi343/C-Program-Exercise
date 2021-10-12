//use of increment  and decrement operator//

#include<stdio.h>
int main()
{
    int a,b,c,d,x;

    printf("enter a four value\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    x=a++ + --b + c-- + ++d;

    printf("a=%d b=%d c=%d d=%d",a,b,c,d);
    printf("\nx=%d",x);


    return 0;
}
