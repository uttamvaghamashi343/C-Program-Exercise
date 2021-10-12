//wap to input any string then find total no of vowel and consonant//

#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int count_v=0,count_c=0;
    int i;

    printf("enter any string : ");
    gets(ch);

 // for(i=0;ch[i]!='\0';i++)
    for(i=0;i<strlen(ch);i++)
    {

    if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' || ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U')
    {
        count_v++;

    }
    else
    {
       count_c++;
    }

}
    printf("total number of vowel is : %d\n",count_v);
    printf("total number of consonant is : %d",count_c);



    return 0;
}

