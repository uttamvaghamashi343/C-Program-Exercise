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
    int a,b,ans=0;

    printf("enter two number:\n");
    scanf("%d%d",&a,&b);

    ans=a+b;

    printf("sum= %d",ans);
}

