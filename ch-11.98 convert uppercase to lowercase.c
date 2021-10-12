//wap to convert uppercase to lowercase using inbuilt function//

#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];

    printf("enter string : ");
    gets(ch);

    printf("\nstring is : %s\n",ch);

    printf("\nlowercase string : %s",strlwr(ch));

    return 0;

}

