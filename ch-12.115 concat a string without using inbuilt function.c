//wap to concat a string without using inbuilt function//

#include<stdio.h>
#include<string.h>
int main()
{
    char ch1[100],ch2[100];
    int i,j;

    printf("enter first string : ");
    gets(ch1);

    printf("enter second string : ");
    gets(ch2);

    for(i=0;ch1[i]!='\0';i++);
    {

       for(j=0;ch2[j]!='\0';j++,i++)
       {
       ch1[i]=ch2[j];
       }
    }
    ch1[i]='\0';

    printf("output string is : %s",ch1);

    return 0;
}

