//display enter alphabet is voewl or consonant//

#include<stdio.h>
int main()
{
    char c;

    printf("enter any alphabet:\n");
    scanf("%c",&c);

    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
    {
        printf("alphabet is vowel");
    }
    else
    {
        printf("alphabet is consonant");
    }

    return 0;
}
