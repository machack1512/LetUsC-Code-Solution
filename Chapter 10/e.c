#include<stdio.h>
int getsum(int);
int main()
{
    int s;
    s=getsum(0);
    printf("the sum of the first 25 natural number is %d\n",s);

    return 0;

}
int getsum(int n)
{
int sum=0;
if (n==25)
{
    return sum;
}
sum=n+getsum(++n);
return(sum);
}