#include<stdio.h>
int main()
{
    int i=1,n,fact=1;
    printf("enter the number:");
    scanf("%d",&n);
    while(i<=n)
    {
          fact=fact*i;
          i++;
    }
          printf("enter the factorial:%d",fact);
    
    return 0;

}