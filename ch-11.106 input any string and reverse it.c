//wap to input any string and reverse it//

#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];

    printf("enter your first string : ");
//  scanf("%[^\n]ch",ch);
    gets(ch);

    printf("your reverse string is : %s",strrev(ch));

    return 0;
}
