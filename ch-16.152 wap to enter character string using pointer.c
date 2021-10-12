//wap to enter character string using pointer//
#include<stdio.h>
int main()
{
    char ch[100],*p,i;

    printf("enter your name:\n");
    gets(ch);

    //scanf("%s",&ch);

    p=&ch[0];

    printf("you enter is :\n");

    for(i=0;ch[i]!='\0';i++)
    {
        printf("%c",*p);
        *p++;
    }
    return 0;


}
