/*marks of the students and the total marks and percentage*/
#include<stdio.h>
int main()
{
    int e,m,s,ss,h,total;
    float per;
    printf("ENGLISH:");
    scanf("%d",&e);
    printf("MATHS:");
    scanf("%d",&m);
    printf("SCIENCE:");
    scanf("%d",&s);
    printf("SOCIAL SCIENCE:");
    scanf("%d",&ss);
    printf("HINDI:");
    scanf("%d",&h);
    total=e+m+s+ss+h;
    printf("total marks:%d",total);
    per=total/5;
    printf("\npercentage:%f",per);
    return 0;
}
