//binary equivalent of a decimal number
#include<stdio.h>
int binary(int);
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);

    binary(n);

    return 0;
}
int binary(int n)
{
    int r;
    
    r=n%2;
    n=n/2;
    if (n==0)
    {
        printf("the binary equivalent is %d",r);
        return(r);
    }
    else
    {
        binary(n);
        printf("%d\n",r);
    }
    
    
}