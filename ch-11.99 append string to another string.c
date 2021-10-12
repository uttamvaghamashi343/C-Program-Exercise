//wap to append string to another string using inbuilt function//

#include<stdio.h>
#include<string.h>
int main()
{
    char ch1[100],ch2[100];

    printf("enter first string : ");
    gets(ch1);

    printf("enter second string : ");
    gets(ch2);

    printf("\nappend string is : %s",strcat(ch1,ch2));

    return 0;
}
