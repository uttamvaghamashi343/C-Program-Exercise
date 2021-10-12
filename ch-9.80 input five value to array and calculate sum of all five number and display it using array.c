//wap to input five value to array and calculate sum of all five number and display it using array//

#include<stdio.h>
int main()
{
    int i,sum,value[5]={86,87,98,92,89};


    for(i=0;i<5;i++)
    {
        printf("subject[%d]  marks = %d\n",i+1,value[i]);
    }
     printf("\n");
    for(i=0;i<5;i++)
    {
    sum=sum+value[i];
    }
    printf("subject[avg_%d]  marks = %d\n",i,sum);

    return 0;
}
