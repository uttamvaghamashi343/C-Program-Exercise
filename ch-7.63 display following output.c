//wap to display following output//
//10 11 13 14 15 17 18 19//

#include<stdio.h>
int main()
{
    int i;

    for(i=10;i<=19;i++)
    {
        if(i==12 || i==16)
            continue;
        {
            printf(" %d ",i);
        }
    }
    return 0;
}



