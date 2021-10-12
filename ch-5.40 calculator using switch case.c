
#include<stdio.h>
int main()
{
    int choice,a,b;

    printf("1. add\n");
    printf("2. sub\n");
    printf("3. mul\n");
    printf("4. div\n");

    printf("enter your choice\n");
    scanf("%d",&choice);

    printf("enter two number\n");
    scanf("%d%d",&a,&b);

    switch(choice)
    {
        case 1: printf("answer = %d\n",a+b);
        break;

        case 2: printf("answer = %d\n",a-b);
        break;

        case 3: printf("answer = %d\n",a*b);
        break;

        case 4: printf("answer = %d\n",a/b);
        break;

        default: break;

        return 0;
    }
}
