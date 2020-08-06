/*calculate the gross salary*/ 
#include<stdio.h>
int main()
{
   int bs,da,hr,gs;
   printf("Enter the basic salary:");
   scanf("%d",&bs);
   da=bs*0.4;
   hr=bs*0.2;
   gs=bs+da+hr;
   printf("the gross salary:%d",gs);
   return 0;
}
