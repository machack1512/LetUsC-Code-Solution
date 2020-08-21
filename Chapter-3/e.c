#include<stdio.h>
int main()
{
    int n,a,r=0;
    printf("Enter the 5-digit number:");
    scanf("%d",&n);

    a=n%10;
    n/=10;
    r=r+a*10000;

    a=n%10;
    n/=10;
    r=r+a*1000;

    a=n%10;
    n/=10;
    r=r+a*100;

    a=n%10;
    n/=10;
    r=r+a*10;

    a=n%10;
    
    r=r+a*1;

    if (r==n){
        printf("equal");
    }
    else
    {
        printf("not equal");
    }
    return 0;
    



}
