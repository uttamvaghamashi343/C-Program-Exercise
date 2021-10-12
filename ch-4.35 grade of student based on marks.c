//grade of student based on marks//

#include<stdio.h>
int main()
{
    int number;

    printf("enter a persentage\n");
    scanf("%d",&number);

    if(number>=90)
    {
        printf("grade-A");
    }
    else if(number>=70)
    {
        printf("grade-B");
    }
    else if(number>=50)
    {
        printf("grade-C");
    }
    else if(number>=40)
    {
        printf("grade-D");
    }
    else if(number<40)
    {
        printf("fail");
    }
    return 0;
}
