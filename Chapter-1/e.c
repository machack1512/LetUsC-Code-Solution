#include<stdio.h>
int main(){
    int l,b,r;
    float a1,a2,p,c;

    printf("lenght breath radius:");
    scanf("%d%d%d",&l,&b,&r);

    a1=l*b;
    a2=3.14*r*r;
    p=l+b/2;
    c=2*3.14*r;
    printf("areas=%f \narea2=%f \nperimeter=%f \ncircum=%f",a1,a2,p,c);
    return 0;
}
