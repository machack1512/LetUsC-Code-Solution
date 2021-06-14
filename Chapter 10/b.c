//find the prime factors of a number recursively
#include<stdio.h>
void factor(int);
int main()
{
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);

    printf("prime factoes:\n");
    factor(n);
    return 0;

}
void factor(int n)
{
   static int i=2;

    if (i<=n)
    {
    if (n%i==0)
    {
        printf("%d\n",i);
        n=n/i;
    }
    else
     i++;
    
    factor(n);
    }
    return ;
    
}