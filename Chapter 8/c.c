#include<stdio.h>
int fun(int,int,char);
int main()
{
    int yr;
    printf("enter a year:\n");
    scanf("%d",&yr);

    yr=fun(yr,1000,'m');
     yr=fun(yr,500,'d');
      yr=fun(yr,100,'c');
       yr=fun(yr,50,'l');
        yr=fun(yr,10,'x');
         yr=fun(yr,5,'v');
          yr=fun(yr,1,'i');

          return 0;
}
int fun(int yr,int k,char ch)
{
    int i,j;
    
    if (yr==9)
    {
    printf("ix");
    return(yr%9);
    }
    if (yr==4)
    {
    printf("iv");
    return(yr%4);
    }

    j=yr/k;

    for (i=1;i<=j;i++)
    printf(" %c",ch);

    return(yr-j*k);

}