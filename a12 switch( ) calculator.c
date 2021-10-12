#include<stdio.h>
int main()
{
    int num1,num2;
    float result;
    char ch;

    printf("ENTER FIRST NUMBER:\n");
    scanf("%d",&num1);
    printf("ENTER SECOND NUMBER:\n");
    scanf("%d",&num2);
    printf("Choose operation to perform (+,-,*,/,%):\n");
    scanf("%c",&ch);

    result=0;
    switch(ch)
    {
      case '+':
        result=num1+num2;
        break;

      case '-':
        result=num1-num2;
        break;

      case '*':
        result=num1*num2;
        break;

      case '/':
        result=(float)num1/(float)num2;
        break;

      case '%':
        result=num1%num2;
        break;

      default:
        printf("Invalid Operation.\n");

    }
    printf("result:\n %d %c %d \n = \n%f",num1,ch,num2,result);
    return 0;
}

