//wap to input any two number their interchange their value without using 3rd variable//

#include<stdio.h>
int main()
{
    int a,b;

    printf("enter value of a and b\n");
    scanf("%d%d",&a,&b);

    printf("before swaping\n value of a=%d\n value of b=%d\n",a,b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("after swaping\n value of a=%d\n value of b=%d\n",a,b);

    return 0;

}
