//wap to craete a pointer array and find max value//

#include<stdio.h>
int main()
{
    int num[100],i,*max,location=1;

    printf("enter five interger value:\n");

    for(i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }

    max=&num[0];
   // max=num;
   // *max=*num;

    for(i=0;i<5;i++)
    {
        if(num[i]>*max)
        {
            *max=num[i];
            location=i+1;
        }

    }
    printf("maximum element is present at location %d and it's value is %d.\n",location,*max);

    return 0;

}
