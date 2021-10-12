//wap to input any sentence and find it's total no of word//

#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int i,count=0;

    printf("enter your sentence : ");
    gets(ch);

    for(i=0;i<strlen(ch);i++)
    {
        if(ch[i] == ' ' && ch[i+1] != '0')
         count++;
    }

    printf("total number of word is : %d\n",count+1);
    printf("total number of space is : %d\n",count);

    return 0;

}
