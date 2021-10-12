//wap to input any sentence and find it's total no of word//

#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int i,count=0;

    printf("enter your sentence : ");
    gets(ch);

 // for(i=0;ch[i]!='\0';i++)
    for(i=0;i<strlen(ch);i++)
    {
        if(ch[i] == ' ')
            count++;
    }

    printf("total number of word is : %d",count+1);
    printf("total number of space is : %d",count);

    return 0;
}
