//wap to convert lowercase to uppercase using inbuilt function//

#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];

    printf("enter string : ");
    gets(ch);

    printf("\nstring is : %s\n",ch);

    printf("\nuppercase string : %s",strupr(ch));

    return 0;
}
