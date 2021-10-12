//wap to input any alphabet then find alphabet is upper or lower//

#include<stdio.h>
int main()
{
    char ch;

    printf("enter any alphabet\n");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    {
        printf("alphabet is upper case");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("alphabet is lower case");
    }
    else
    {
        printf("this is not alphabet");
    }
    return 0;
}
