#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int i,p;

    printf("enter any string : ");
    gets(ch);

    printf("delete any character : ");
    scanf("%d",&p);

//  for(i=p;i<strlen(ch);i++)
    for(i=p;ch[i]!='\0';i++)
    {
        ch[i]=ch[i+1];
    }
    printf("string is : %s",ch);

    return 0;
}
