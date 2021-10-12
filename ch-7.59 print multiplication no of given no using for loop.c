//wap to print multiplication no of given no using for loop//

#include<stdio.h>
int main()
{
    int number,i;

    printf("enter number to print multiplication\n");
    scanf("%d",&number);

    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",number,i,number*i);
    }
    return 0;
}
