#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int f(int *,int *,double *);
int main()
{
    unsigned int sum,avg;
     double stdiv;
   
    f(&sum,&avg,&stdiv);
    printf("sum=%d\navgrage=%d\nstandard divation=%lf\n",sum,avg,stdiv);
    return 0;
}
int f(int *sum,int *avg,double *stdiv)
{
     int a,b,c,d,e;
    printf("enter 5 number:\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    *sum=a+b+c+d+e;
    *avg=*sum/5;
    *stdiv=sqrt((pow((a-*avg),2)+pow((b-*avg),2)+pow((c-*avg),2)+pow((d-*avg),2)+pow((e-*avg),2))/4);


}