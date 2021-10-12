//wap to print all even number between 20 to 30//

#include<stdio.h>
int main()
{
    int number;

    for(number=20;number<=30;number++)
    {
        if(number%2!=0)
        {
            printf(" %d ",number);

        }
    }
    return 0;
}
