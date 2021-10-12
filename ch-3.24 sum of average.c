//sum of average//

#include<stdio.h>
int main()
{
    float a1,a2,a3,a4,a5,ans;
    printf("enter a five number\n");
    scanf("%f%f%f%f%f",&a1,&a2,&a3,&a4,&a5);

    ans=(a1+a2+a3+a4+a5)/5;
    printf("sum of average is %.2f\n",ans);

    return 0;

}
