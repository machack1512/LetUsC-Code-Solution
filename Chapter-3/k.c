#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,r;
    float dis,d;
    printf("Enter the centre of circle(x,y):");
    scanf("%d%d",&x,&y);
    printf("radius of circle:");
    scanf("%d",&r);
    
    dis=sqrt(pow(x,2)+pow(y,2));
    dis=pow(r,2);
    if (dis==d)
    {
        printf("points lies in the circle");
    }
    else
    {
        printf("the point lies out of the circle");
    }
    return 0;
    
    
    
}