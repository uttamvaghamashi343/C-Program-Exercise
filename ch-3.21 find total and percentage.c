//input rollno name and  marks of three subjects and find total and percentage//

#include<stdio.h>
int main()
{
    char ch;
    printf("enter a student name\n");
    scanf("%c",&ch);

    int roll_num;
    printf("enter your roll number\n");
    scanf("%d",&roll_num);

    float n1,n2,n3,total,percentage;

    printf("enter your marks out of 100\n");
    scanf("%f%f%f",&n1,&n2,&n3);

    total=n1+n2+n3;
    printf("total marks is %f\n",total);

    percentage=total/3;
    printf("percentage is %f\n",percentage);

    return 0;

}
