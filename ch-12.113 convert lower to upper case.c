//wap to convert lower to upper case without using inbuilt function//

#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int i;

    printf("enter any string : ");
    gets(ch);

 // for(i=0;i<strlen(ch);i++)
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>='a' && ch[i]<='z')
        {
            ch[i]=ch[i]-32;
        }
    }
    printf("upper case string is : %s",ch);

    return 0;


}
