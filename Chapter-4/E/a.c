#include<stdio.h>
int main()
{
    char n;
    printf("character:");
    scanf(" %c",&n);
    ((n>97 && n<122)?printf("lowercase"):printf("ERROR"));
    return 0;
}
