#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    float r,angle;
    printf("enter the co-ordinates in x,y:");
    scanf("%d%d",&x,&y);
    
    r=sqrt(x*x+y*y);
    angle=atan(y/x);
    angle=angle*180/3.14;

    printf("the new co-ordinates are:%f",r);
    printf("\nangle:%f",angle);
    return 0;

}
