//wap to display odd number between 1 to 20 in ascending order//

#include<stdio.h>
int main()
{
    int number;

    for(number=20;number>=1;number--)

    if(number%2==0)
    {
        printf(" %d ",number);
    }
    return 0;
}
