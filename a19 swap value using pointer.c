//swap value using pointer//

#include<stdio.h>
int main()
{
    int a=10,b=20,*p1=&a,*p2=&b;

    printf("before swap : *p1=%d  *p2=%d",*p1,*p2);

    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;

    printf("\nafter swap : *p1=%d  *p2=%d",*p1,*p2);

    return 0;
}
