#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int i,count=0;

    printf("enter any string : ");
    gets(ch);

  //for(i=0;i<strlen(ch);i++)
    for(i=0;ch[i]!='\0';i++)
    {
        count++;
    }

    printf("length of string is : %d",count);

    return 0;
}
