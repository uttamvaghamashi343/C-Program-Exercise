//takes nothing return something//

#include<stdio.h>
int sum(void);
int main()
{
    int ans=0;

    ans=sum();

    printf("sum= %d",ans);

    return 0;
}
int sum()
{
    int a,b,c;
    printf("enter two number:\n");
    scanf("%d%d",&a,&b);

    return a+b;
}

