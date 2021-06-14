//to calcutate the factorial of the given number with the help of the function
#include<stdio.h>
int fact(int);
int main()
{
    int n,factorial;
    printf("enter the number:");
    scanf("%d",&n);
    factorial=fact(n);
    printf("factorial=%d",factorial);
    return 0;
}
int fact(int n)
{
    int i;
    long int factorial=1;
      for (i=1;i<=n;i++)
      {
          factorial=factorial*i;
      }
      return(factorial);
}