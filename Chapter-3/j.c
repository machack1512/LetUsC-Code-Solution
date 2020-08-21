#include<stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3;
    float s1,s2,s3;
    printf("enter the co-ordinates(x1,y1);");
    scanf("%d%d",&x1,&y1);
    printf("enter the co-ordinates(x2,y2);");
    scanf("%d%d",&x2,&y2);
    printf("enter the co-ordinates(x3,y3);");
    scanf("%d%d",&x3,&y3);

    s1=(x2-x1)/(y2-y1);
    s2=(x3-x2)/(y3-y2);
    s3=(x3-x1)/(y3-y1);

    if (s1==s2 && s1==s3)
    {
        printf("colinear");
    }
    else{
        printf("not coloinear");
    }
    return 0;
    

}