#include <stdio.h>
int main()
{
     int a, b, c;
     a = 2, b = 4, c = 8;

     switch (a > b && a > c)
     {
     case 1:
          printf("a is the boss");
          break;
     default:
          printf("a is not the boss");
          break;
     }
     return 0;
}