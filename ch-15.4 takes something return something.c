//takes somethinng return something//

#include<stdio.h>
int sum(int,int);
int main()
{
    int x,y,ans;

    printf("enter two number:\n");
    scanf("%d%d",&x,&y);

    ans=sum(x,y);
    printf("sum= %d",ans);

    return 0;
}
int sum(int a,int b)
{
    int c;
    c=a+b;
    return c;
}

