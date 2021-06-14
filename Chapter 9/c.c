#include<stdio.h>
#include<math.h>
float numerator(float,int);
float dinomirator(int);
int main()
{
    float n,x,a,b,sum=0;
    int i,j;
    printf("enter the value of the x:");
    scanf("%f",&x);
    for (i=1;i<=10;i++)
    {
        for (j=1;j<=10;j+=2)
        {
            a=numerator(x,j);
            b=dinomirator(j);
            n=a/b;
            (i%2==0)?sum=sum-n:(sum=sum+n);
    }}
     printf("%f",n);
            return 0;
        

}
float numerator(float x,int j)
{
    int k=1;
    int f;
    f=pow(x,j);
    return(f);
}
float dinomirator(int j)
{
    int m;
    float h=1;
  for (m=1;m<=j;m++)
    h=h*m;

    return(h);
}
