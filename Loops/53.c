// GCD x LCM = A x B

#include <stdio.h>
int main() {
     int a, b;
     printf("Enter two integers: ");
     scanf("%d%d", &a, &b);
     int x = a, y = b;

     while(b%a != 0){
          int temp = a;
          a = b%a;
          b = temp;
     }

     printf("GCD = %d and LCM = %d", a, (x*y)/a);
     return 0;
}