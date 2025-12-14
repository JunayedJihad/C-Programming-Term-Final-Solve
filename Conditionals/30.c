#include <stdio.h>

int main()
{
     int attendance, marks;
     printf("Enter attendance percentage: ");
     scanf("%d", &attendance);

     // Create a single value that maps to 8 cases
     int code = (attendance < 60) ? 0 : (attendance < 65) ? 1
                                    : (attendance < 70)   ? 2
                                    : (attendance < 75)   ? 3
                                    : (attendance < 80)   ? 4
                                    : (attendance < 85)   ? 5
                                    : (attendance < 90)   ? 6
                                                          : 7;

     switch (code)
     {
     case 7: // 90% and above
          marks = 10;
          break;
     case 6: // 85-89%
          marks = 9;
          break;
     case 5: // 80-84%
          marks = 8;
          break;
     case 4: // 75-79%
          marks = 7;
          break;
     case 3: // 70-74%
          marks = 6;
          break;
     case 2: // 65-69%
          marks = 5;
          break;
     case 1: // 60-64%
          marks = 4;
          break;
     default: // Below 60%
          marks = 0;
          break;
     }

     printf("Marks: %d\n", marks);

     return 0;
}