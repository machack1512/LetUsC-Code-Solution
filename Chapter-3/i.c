#include<stdio.h>
int main(){
    int l,b;
    float per,area;
    printf("ENter the lenght and bridth:");
    scanf("%d%d",&l,&b);
    
    per=2*(l+b);
    area=l*b;

    if (area>per)       
    {
        printf("area is greater than perimeter");
    }
    else
    {
        printf("perimeter is grater than area");
    }
    
    return 0;
    
}