#include<stdio.h>
void result(float *,float *);
int main()
{
    float avg,per;
   result(&avg,&per);
   printf("average=%f\npercentage=%f",avg,per);
   return 0;
}
void result(float *avg,float *per)
{
    int a,b,c;
    printf("enter the marks of three subject:");
    scanf("%d%d%d",&a,&b,&c);
    *per=*avg=(a+b+c)/3.0f;
    
}
