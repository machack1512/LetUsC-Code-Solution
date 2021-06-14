#include<stdio.h>
#include<math.h>
float area(float,float,float);
int main()
{
        float a,b,c,z;
    
    printf("enter the sides of the triangle:");
    scanf("%f%f%f",&a,&b,&c);
     z=area(a,b,c);
     printf("\n\narea of the triangle:%.3f",z);
     return 0; 
}
float area(float a,float b,float c)
{
    float s,m,x;
    s=(a+b+c)/2;
    m=s*(s-a)*(s-b)*(s-c);
    x=sqrt(m);
    return (x);
    
  
}