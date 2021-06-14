#include<stdio.h>
#include<math.h>
int main()
{
    int i,p,r,n,q,a;
    for (i=1;i<=10;i++)
    {
        printf("enter the principle amopunt:");
        scanf("%d",&p);
        printf("enter the rate:");
        scanf("%d",&r);
        printf("enter the times of simple interest:");
        scanf("%d",&q);
        printf("enter the year:");
        scanf("%d",&n);

        a=p*pow(1+r/q,n*q);

        printf("the amount of the simple interest:\n");

    }
    return 0;
}