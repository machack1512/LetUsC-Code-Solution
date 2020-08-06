//distance between the two cities
#include<stdio.h>
int main()
{
      int d1,d2,d3,d4,d5;
      printf("Enter the distance b/w the cities(km):");
      scanf("%d",&d1);
      d2=d1*1000;
      d3=d1*3280.84;
      d4=d1*39370.1;
      d5=d1*1000*100;
      printf("\ndistance(meters):%d",d2);
      printf("\ndistance(feet):%d",d3);
      printf("\ndistance(inches):%d",d4);
      printf("\ndistance(centimeters):%d",d5);
      return 0;
}
