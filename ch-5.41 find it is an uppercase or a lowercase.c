//wap to input any alphabet then find it is an uppercase or a lowercase//

#include<stdio.h>
int main()
{
    char ch;

    printf("enter any character\n");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    {
        printf("'%c' is uppercase alphabet.",ch);
    }
    else if(ch>='a' && ch<='z')
    {
        printf("'%c' is lowercase alphabet.",ch);
    }
    else
    {
        printf("'%c' is not an  alphabet.",ch);
    }
    return 0;
}
