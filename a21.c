#include<stdio.h>
int main()
{
    int k=10;
    {
        int k=5;
        {
            printf("%d",k);
            k++;
        }
        printf("%d",k);

    }
    return 0;
}

