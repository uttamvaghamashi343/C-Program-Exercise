//wap to input five values to an array and print it on sreen using one dimensional array//

#include<stdio.h>
int main()
{
    int i,value[5];

    for(i=0;i<5;i++)
    {
        printf("enter a[%d]: ",i+1);
        scanf("%d",&value[i]);
        printf("\n");

    }

    printf("printing element of the array\n\n");

    for(i=0;i<5;i++)
    {
        printf("%d ",value[i]);
    }
    return 0;
}

