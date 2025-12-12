#include <stdio.h>
int main()
{
     float mark, grade;
     int a;
     printf("Enter the mark: ");
     scanf("%f", &mark);
     if (mark > 100 || mark < 0){
          printf("Invalid mark !!!");
          return -1;
     }

     a = mark / 10;
     switch (a)
     {
     case 10:
     case 9:
          grade = 4.00;
          break;
     case 8:
          grade = 3.75;
          break;
     case 7:
          grade = 3.50;
          break;
     case 6:
          grade = 3.00;
          break;
     case 5:
          grade = 2.50;
          break;
     case 4:
          grade = 2.00;
          break;
     default:
          grade = 0.00;
     }

     printf("Your grade : %.2f", grade);
     return 0;
}