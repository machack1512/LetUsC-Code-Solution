#include<stdio.h>
int main()
{
    int num1,num2,i=1;
     long int power=1;
    printf("enter the number:");
    scanf("%d%d",&num1,&num2);
    while (i<=num2)
    {
        power=power*num1;
        i++;
    }
    printf("%d to the power %d is %d\n",num1,num2,power);
    return 0;
}
