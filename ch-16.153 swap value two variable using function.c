//wap to swap value two variable using function NRNA//

//takes nothing return nothing//

#include<stdio.h>
void sum(void);//fun declare
int main()
{
    sum();

    return 0;//fun call


}

void sum()
{
    int a,b,*p1,*p2;

    printf("enter two number:\n");
    scanf("%d%d",&a,&b);

    printf("before swaping a=%d  b=%d\n",a,b);

    p1=&a;
    p2=&b;


    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;

    printf("after swaping a=%d  b=%d\n",*p1,*p2);

    return 0;

}

