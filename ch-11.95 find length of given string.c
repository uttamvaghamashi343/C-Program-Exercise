//wap to find length of given string using inbuilt function//

#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];

    printf("enter string : \n");
    gets(ch);
 // scanf("%[^\n]ch",ch);

    printf("length of string is : %d",strlen(ch));

    return 0;
}
