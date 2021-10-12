//wap to print number between 1 to n and itz square//

#include<stdio.h>
int main()
{
    int number,square,i;

    printf("enter number to square\n");
    scanf("%d",&number);

    for(i=1;i<=number;i++)
    {
        square=i*i;
        printf(" %d * %d = %d ",i,i,i*i);
        printf("\n");
    }

    return 0;
}
