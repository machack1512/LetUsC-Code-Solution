#include<stdio.h>
int main()
{
    int n,a,rev=0;
    printf("Enter the 5 digit number:");
    scanf("%d",&n);

    a=n%10;
    n/=10;
    rev=rev+a*10000;
   
    a=n%10;
    n/=10;
    rev=rev+a*1000;
   
    a=n%10;
    n/=10;
    rev=rev+a*100;

    a=n%10;
    n/=10;
    rev=rev+a*10;

    a=n%10;
    rev=rev+a;
    printf("reverse number of the 5-digit number:%d",rev);
    return 0;
}
