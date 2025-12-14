#include <stdio.h>
#include <string.h>
int main()
{
     int mark;
     char grad[5];
     printf("Enter an integer mark: ");
     scanf("%d", &mark);

     int key = (mark >= 80) ? 1 : (mark >= 75) ? 2
                              : (mark >= 70)   ? 3
                              : (mark >= 65)   ? 4
                              : (mark >= 60)   ? 5
                              : (mark >= 55)   ? 6
                              : (mark >= 50)   ? 7
                              : (mark >= 40)   ? 8
                              : (mark >= 0)    ? 9
                                               : 0;

     switch (key)
     {
     case 1:
          strcpy(grad, "A+");
          break;
     case 2:
          strcpy(grad, "A");
          break;
     case 3:
          strcpy(grad, "A-");
          break;
     case 4:
          strcpy(grad, "B+");
          break;
     case 5:
          strcpy(grad, "B");
          break;
     case 6:
          strcpy(grad, "B-");
          break;
     case 7:
          strcpy(grad, "C");
          break;
     case 8:
          strcpy(grad, "D");
          break;
     case 9:
          strcpy(grad, "F");
          break;
     }

     printf("%s", grad);
     return 0;
}