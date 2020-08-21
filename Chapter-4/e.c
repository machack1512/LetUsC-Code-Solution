#include<stdio.h>
int main()
{
    int red,blue,green;
    float white,cyan,magenta,yellow,black;
    printf("enter the red(0-255):");
    scanf("%d",&red);
    printf("enter the blue(0-255):");
    scanf("%d",&blue);
    printf("enter the green(0-255):");
    scanf("%d",&green);

    white=max(red/255,blue/255,green/255);
    cyan=(white-red/255)/white;
    magenta=(white-green/255)/white;
    yellow=(white-blue/255)/white;
    black=1-white;

    printf("cyan:&f",cyan);
    printf("\nmagenta:&f",magenta);
    printf("\nyellow:&f",yellow);
    printf("\nblack:&f",black);
    return 0;


    
}