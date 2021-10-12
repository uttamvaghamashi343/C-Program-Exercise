//wap to input any alphabet then print alphabet regrading city name//

#include<stdio.h>
int main()
{
    char ch;

    printf("enter any alphbet\n");
    scanf("%c",&ch);

    switch(ch)
    {

    case 'a':
        printf("ahmedabad");
        break;

    case 'b':
        printf("baroda");
        break;

    case 'c':
        printf("chennai");
        break;

    case 'd':
        printf("delhi");
        break;

    default:
        printf("invalid charcter");
    }
    return 0;
}
