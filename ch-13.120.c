//wap to input any character and display using gets()//

#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];

    printf("enter any string : ");
    gets(ch);

    printf("you enter is : %s",ch);

    return 0;
}
