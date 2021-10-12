#include<stdio.h>
int main()
{
    int x=4,y;
    y=--x;             //x=x-1  pre decrement
    printf("%d%d",x,y);
    y=x--;             //x=x-1  post decrement
    printf("%d%d",x,y);
}
return0;
