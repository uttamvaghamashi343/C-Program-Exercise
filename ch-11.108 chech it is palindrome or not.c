//wap to input any string then chech it is palindrome or not//

#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];

    printf("enter your string : ");
    gets(ch);

    if(ch==strrev(ch))
    {
        printf(" String is Palimdrome ");
    }
    else
    {
        printf(" String is not Palimdrome ");

    }

    return 0;
}
