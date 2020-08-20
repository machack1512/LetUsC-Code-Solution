#include<stdio.h>
#include<math.h>
int main()
{
    int angle;
    int s,t,c;
    
    printf("enter the angle:");
    scanf("%d",&angle);
    
    angle=angle*3.14/180;
    s=sin(angle);
    c=cos(angle);
    t=tan(angle);
    
    printf("tan=%d \ncos=%d \nsin=%d",t,c,s);
    
    return 0;


}
