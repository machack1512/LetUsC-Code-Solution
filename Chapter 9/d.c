#include<stdio.h>
int swap(int,int,int);
int main()
{
    int x,y,z;
    printf("enter the values(x,y,z):");
    scanf("%d%d%d",&x,&y,&z);
    swap(x,y,z);
    return 0;

}
int swap(int x,int y,int z)
{
    int t,i;
    for (i=0;i<=2;i++)
    {
        t=z;
        z=y;
        y=x;
        x=t;
        printf("\n\nafter right shifting of the values %d times:\n",i+1);
        printf("x=%d\ty=%d\tz=%d\t",x,y,z);
    }

    

    

}