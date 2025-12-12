#include <stdio.h>
#include <math.h>
int main()
{
     float a, b, c, a_sq, b_sq, c_sq, largest_sq, sum_of_other_two;
     printf("Length of the sides: ");
     scanf("%f%f%f", &a, &b, &c);

     // Calculate squares of all sides
     a_sq = a * a;
     b_sq = b * b;
     c_sq = c * c;

     // Find the largest side's square and sum of other two
     if (a >= b && a >= c)
     {
          // a is largest
          largest_sq = a_sq;
          sum_of_other_two = b_sq + c_sq;
     }
     else if (b >= a && b >= c)
     {
          // b is largest
          largest_sq = b_sq;
          sum_of_other_two = a_sq + c_sq;
     }
     else
     {
          // c is largest
          largest_sq = c_sq;
          sum_of_other_two = a_sq + b_sq;
     }

     float diff = fabs(largest_sq - sum_of_other_two); // fabs is in <MATH.H>
     if (diff < 0.00001)
     {
          // largest² = other1² + other2² → RIGHT triangle
          printf("RIGHT\n");
     }
     else if (largest_sq < sum_of_other_two)
     {
          // largest² < other1² + other2² → ACUTE triangle
          printf("ACUTE\n");
     }
     else
     {
          // largest² > other1² + other2² → OBTUSE triangle
          printf("OBTUSE\n");
     }
     return 0;
}