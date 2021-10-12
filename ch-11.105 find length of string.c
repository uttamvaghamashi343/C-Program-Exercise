//wap to input any string and find it's length//


#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];

    printf("enter any string : ");
    gets(ch);
 // scanf("%[^\n]ch",ch);

    printf("length of string is : %d",strlen(ch));

    return 0;
}
