#include<stdio.h>
int prime(int);   //function declaration
int main()
{
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);
     
     prime(n);   //function call

     return 0;
}
int prime(int n)
{
    int i=2;
    printf("prime factors of %d are\n",n);

    while (n!=1)
    {
         if (n%i==0)
         printf("%d",i);
         else 
         {
             i++;
             continue;
         }
         n=n/i;
    }
    
}
