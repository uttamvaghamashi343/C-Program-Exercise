//wap to input five value to an array and print it on screen using one dimensional array//

#include<stdio.h>
int main()
{
    int i;
    int value[5]={45,36,76,17,57};


    for(i=0;i<5;i++)
    {
        printf("position : [%d] , value : %d\n",i,value[i]);
    }

    return 0;
}
