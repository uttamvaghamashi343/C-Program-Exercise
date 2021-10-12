#include<stdio.h>
#include<string.h>
int main()
{
    char ch1[100],ch2[100];
    int i=0,j=0;

    printf("enter first string : ");
    gets(ch1);

    printf("enter second string : ");
    gets(ch2);

    while(ch1[i]!='\0')
    {
         i++;
    }


    while(ch2[j]!='\0')
    {
        ch1[i]=ch2[j];
        j++;
        i++;
    }

    ch1[i]!='\0';



    printf("output string is : %s",ch1);

    return 0;
}

