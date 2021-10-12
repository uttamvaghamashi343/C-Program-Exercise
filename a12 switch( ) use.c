#include<stdio.h>
int main()
{
    while(1)
 {

    int choise,a,b,s;
    printf("\n1. ADDITION");
    printf("\n2. ODD-EVEN");
    printf("\n3. PRINTING N NUMBER");
    printf("\n4. EXIT");

    printf("\n\nENTER YOUR CHOISE");
    scanf("%d",&choise);
    switch(choise)
    {
    case 1:
        printf("ENTER TWO NUMBER");
        scanf("%d%d",&a,&b);
        s=a+b;
        printf("\nSUM IS %d",s);
        break;
    case 2:
        printf("ENTER A NUMBER");
        scanf("%d",&a);
        if(a%2==0)
        {
            printf("ODD NUMBER");
        }
        else
        {
            printf("EVEN NUMBER");
        }
        break;
    case 3:
        printf("ENTER A NUMBER");
        scanf("%d",&a);
        for(b=1;b<=a;b++)
        {
            printf("\n%d",b);
        }
        break;
    case 4:
        {
        exit(0);
        }
    default:
        {
            printf("INVALID CHOISE");
        }

    }
 }
}
return0;
