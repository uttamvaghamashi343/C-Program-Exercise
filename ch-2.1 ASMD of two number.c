#include<stdio.h>
int main()
{
    int a,b,ans;

    printf("enter two intergers\n");
    scanf("%d%d",&a,&b);

    ans=a+b;
    printf("addition = %d\n",ans);

    ans=a-b;
    printf("substraction = %d\n",ans);

    ans=a*b;
    printf("multiplication = %d\n",ans);

    ans=a/b;
    printf("division = %d\n",ans);

    ans=a%b;
    printf("modulo = %d\n",ans);

    return 0;




}
