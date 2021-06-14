//to calculate the power of the given number using function
#include<stdio.h>
long power(int,int);
int main()
{
    int x,y;
    long pow;
    printf("enter the two number:");
    scanf("%d%d",&x,&y);
    pow=power(x,y);
    printf("%d is rasied of %d=%d",x,y,pow);
    return 0;
}
long power(int x,int y)
{
    int i=1;
    long p=1;
    for (i=0;i<=y;i++)
    p=p*x;
    return(p);
}