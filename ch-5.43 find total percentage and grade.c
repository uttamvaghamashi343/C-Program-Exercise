//wap to input student roll no,name and marks of 3 subjects then find total percentage and grade//

#include<stdio.h>
int main()
{
    char ch;
    float roll_no,sub1,sub2,sub3,percentage,grade,total_marks;

    printf("enter your name\n");
    scanf("%c",&ch);

    printf("enter your roll no\n");
    scanf("%f",&roll_no);

    printf("enter your marks any three subject\n");
    scanf("%f%f%f",&sub1,&sub2,&sub3);

    total_marks=sub1+sub2+sub3;
    percentage=total_marks/3;

    printf("your total marks is %f\n",total_marks);
    printf("your percentage is %f\n",percentage);

    if(percentage>90)
    {
        printf("grade : A");
    }
    else if(percentage>70)
    {
        printf("grade : B");
    }
    else if(percentage>50)
    {
        printf("grade : C");
    }
    else if(percentage>40)
    {
        printf("grade : D");
    }
    else if(percentage<40)
    {
        printf("fail");
    }

    return 0;
}
