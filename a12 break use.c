#include<stdio.h>
int main()
{
    int i=1,x;
    while(i<=5)
    {
        printf("ENTER A NUMBER");
        scanf("%d",&x);
        if(x>0)
            break;
        i++;
    }
    i==6?printf("ENDS NORMALLY"):printf("APPLIED BREAK");
}
return0;
