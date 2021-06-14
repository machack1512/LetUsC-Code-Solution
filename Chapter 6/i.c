#include<stdio.h>
int main()
{
    int i,popu=100000;
    
    for (i=1;i<=10;i++)
    {
        popu=popu+(0.1*100000);
        printf("for the year %d population:%d\n",i,popu);
   }
   return 0;
}