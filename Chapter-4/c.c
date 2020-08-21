#include<stdio.h>
int main()
{
    int a,b,c,t;
    printf("enter the sides of the triangle:");
    scanf("%d%d%d",&a,&b,&c);
    t=a+b;
   if (t>c)
   {
       printf("the triangle is valid");
   }
   else
   {
       printf("the trangle is not valid");
   }
   return 0;

   
   
}