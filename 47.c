#include <stdio.h>
int main()
{
     int n, num;
     int max1, max2;
     printf("How many positive integers? ");
     scanf("%d", &n);

     printf("Start typing %d integers...\n", n);
     scanf("%d", &max1);
     max2 = max1;

     for (int i = 1; i < n; i++)
     {
          scanf("%d", &num);

          // Rule 1: If new number is BIGGER than max1
          if (num > max1)
          {
               max2 = max1; // Old biggest becomes second biggest
               max1 = num;  // New number becomes biggest
          }
          // Rule 2: If new number is between max1 and max2
          else if (num > max2 && num < max1)
          {
               max2 = num; // Update second biggest
          }
     }
     printf("Second maximum of the numbers = %d", max2);
     return 0;
}
