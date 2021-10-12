//wap to input string and copy in another string//

#include<stdio.h>
#include<string.h>
int main()
{
    char ch1[100],ch2[100];

    printf("enter your first string : ");
  //scanf("%[^\n]ch1",ch1);
    gets(ch1);

    printf("your copy string is : %s",strcpy(ch2,ch1));

    return 0;
}
