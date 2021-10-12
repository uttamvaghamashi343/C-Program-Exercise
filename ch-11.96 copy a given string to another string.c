//wap to copy given string to another string using inbuilt function//

#include<stdio.h>
#include<string.h>
int main()
{
    char ch1[100],ch2[100];

    printf("enter your first string : ");
    scanf("%[^\n]ch1",ch1);

    strcpy(ch2,ch1);

    printf("\nyour second string is : %s",ch2);

    return 0;
}
