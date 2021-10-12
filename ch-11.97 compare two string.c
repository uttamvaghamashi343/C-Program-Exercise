//wap to compare two string using inbuilt function//

#include<stdio.h>
#include<string.h>
int main()
{
    char ch1[100],ch2[100];

    printf("enter first string : ");
    gets(ch1);

    printf("\nenter second string : ");
    gets(ch2);

    printf("\n");

    if(strcmp(ch1,ch2)==0)
    {
        printf("string is equal");
    }
    else
    {
        printf("string is not equal");
    }

    return 0;
}
