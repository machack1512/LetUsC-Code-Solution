#include<stdio.h>
int main(){
    int a,b,c,sum;
    printf("enter the angles:");
    scanf("%d%d%d",&a,&b,&c);

    sum=a+b+c;
    if (sum==180)
    {
        printf("triangle is formed");       
    }
    else
    {
        printf("not formed triangle");
    }
    return 0;
    
    

}