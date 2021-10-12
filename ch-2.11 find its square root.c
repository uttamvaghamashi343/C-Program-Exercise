//accept number and find its square root//

#include<stdio.h>
#include<math.h>
int main()
{
    float number,ans;

    printf("enter a number\n");
    scanf("%f",&number);

    ans=sqrt(number);
    printf("square root is %f",ans);

    return 0;

}
