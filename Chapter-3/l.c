#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the co-ordinates:");
    scanf("%d%d",&x,&y);
     
     if (x==0 && y==0)
     {
         printf("origin");
     }
     else if (x==0 && y!=0){
         printf("y-axis");
     }
     else
     {
         printf("x-axis");
     }
     return 0;
     
     
}