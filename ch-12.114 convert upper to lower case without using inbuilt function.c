//wap to convert upper to lowercase without using inbuilt functiom//

#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int i;

    printf("enter any string : ");
    gets(ch);

 // for(i=0;ch[i]!='\0';i++)
    for(i=0;i<strlen(ch);i++)
    {
        if(ch[i]>='A' && ch[i]<='Z')
        {
            ch[i]=ch[i]+32;
        }
    }

    printf("lowercase string is : %s",ch);

    return 0;

}
