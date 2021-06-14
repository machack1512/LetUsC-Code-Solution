//calculate sum of digits of a five-digit number with/without recursion
#include<stdio.h>
int sum(int);
int rsum(int);
int main()
{
    int s,rs,n;
    printf("enter the number:\n");
    scanf("%d",&n);

    s=sum(n);
    printf("sum of the digits without using recursion is %d\n",s);
    rs=rsum(n);
    printf("sum of the digits with using recursion is %d\n",rs);

    return 0;

}
int sum(int n)
{
    int r,sum=0;
    while (n>0)
    {
        r=n%10;
        sum+=r;
        n/=10;
    }
    return(sum);
    
}
int rsum(int n)
{
    int sum=0,r;
    if (n!=0)
    {
        r=n%10;
        sum=r+rsum(n/10);
    }
    return(sum);
}