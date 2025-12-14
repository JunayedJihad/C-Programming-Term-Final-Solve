#include <stdio.h>
#include <math.h>
int main() {
     int num, rem;
     printf("Enter an integer: ");
     scanf("%d", &num);
     int original = num;

     int count = 0;
     while(num!=0){
          count++;
          num/=10;
     }
     num = original;

     int sum = 0;
     while(num!=0){
          rem = num%10;
          sum += pow(rem,count);
          num/=10;
     }

     printf((sum==original) ? "Armstrong Number" : "Not an armstrong number");
     return 0;
}