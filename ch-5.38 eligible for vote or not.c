//check whether persion is eligible for vote or not//

#include<stdio.h>
int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("you are eligible for vote");
    }
    else
    {
        printf("you are not eligible for vote");
    }
    return 0;
}
