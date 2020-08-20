#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a,n,sum=0;
    printf("Enter the 5 digit number:");
    scanf("%d",&n);

    a=n%10;
    n=n/10;
    sum=sum+a;

    a=n%10;
    n=n/10;
    sum=sum+a;

    a=n%10;
    n=n/10;
    sum=sum+a;

    a=n%10;
    n=n/10;
    sum=sum+a;

    a=n%10;
    n=n/10;
    sum=sum+a;

    printf("total sum:%d",sum);
    return 0;
    }
