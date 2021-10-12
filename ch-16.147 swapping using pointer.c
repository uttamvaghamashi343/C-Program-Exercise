//wap to swaping using pointer//

#include<stdio.h>
int main()
{
    int a,b,temp,*p1,*p2;

    printf("enter two number:\n");
    scanf("%d%d",&a,&b);

    printf("before swaping: a=%d  b=%d\n",a,b);

    p1=&a;
    p2=&b;

    temp=p1;
    p1=p2;
    p2=temp;

    printf("after swaping: a=%d  b=%d",*p1,*p2);

    return 0;


}
