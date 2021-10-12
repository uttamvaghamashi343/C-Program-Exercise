//wap to print square and qube of all natural number between 1 to 100//

#include<stdio.h>
int main()
{
    int number;

    for(number=1;number<=100;number++)
    {
        printf("%d * %d = %d\n",number,number,number*number);   //square
        printf("%d * %d * %d = %d\n",number,number,number,number*number*number);   //cube
    }
    return 0;
}
