#include<stdio.h>
int main()
{
    int class,failed;
    printf("enter the class that the student are performed:");
    scanf("%d",&class);
    switch (class)
    {
        case 1:
        printf("how many subject did student get failed:");
        scanf("%d",&failed);
        if (failed>3)
          printf("there is no garce marks");
          else if (failed<=3)
          printf("the grace marks is 5 per subject");
          else 
          printf("ERROR");

          case 2:
        printf("how many subject did student get failed:");
        scanf("%d",&failed);
        if (failed>2)
          printf("there is no garce marks");
          else if (failed<=2)
          printf("the grace marks is 4 per subject");
          else 
          printf("ERROR");

          case 3:
        printf("how many subject did student get failed:");
        scanf("%d",&failed);
        if (failed>1)
          printf("there is no garce marks");
          else if (failed<=1)
          printf("the grace marks is 5 per subject");
          else 
          printf("ERROR");
        }
        return 0;
}