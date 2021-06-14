#include<stdio.h>
int main()
{
    int number,i,result;
    printf("enter the number:");
    scanf("%d",&number);
    for (i=1;i<=10;i++)
    {
        result=number*i;
        printf("%d*%d=%d\n",number,i,result);
    }
return 0;
    
}