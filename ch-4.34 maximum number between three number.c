//find maximum number between three number//

#include<stdio.h>
int main()
{
    int a,b,c;

    printf("enter three number\n");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
    {
        printf("greater number is %d\n",a);
    }
    else if(b>c)
    {
        printf("greater number is %d\n",b);
    }
    else
    {
        printf("greater number is %d\n",c);
    }
    return 0;
}
