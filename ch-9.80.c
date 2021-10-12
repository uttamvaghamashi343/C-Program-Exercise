//wap to input five value to array and calculate sum of all five number and display it using array//


#include<stdio.h>
int main()
{
    int i,sum=0,value[5];

    for(i=0;i<5;i++)
    {
    printf("enter value a[%d]: ",i+1);
    scanf("%d",&value[i]);
    printf("\n");
    sum=sum+value[i];
    }

    printf("\nsum of element = %d\n ",sum);

    return 0;

}
