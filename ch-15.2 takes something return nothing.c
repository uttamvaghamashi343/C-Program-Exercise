//takes something return nothing//

#include<stdio.h>
void sum(int,int);
int main()
{
    int a,b;

    printf("enter two number:\n");
    scanf("%d%d",&a,&b);

    sum(a,b);

    return 0;
}

void sum(int a,int b)
{
    int c;

    c=a+b;

    printf("sum= %d",c);
}

