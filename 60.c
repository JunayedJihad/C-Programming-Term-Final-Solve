#include <stdio.h>
int main() {
     int num, rem, reverse = 0;
     printf("Enter an integer: ");
     scanf("%d", &num);

     while(num != 0){
          rem = num % 10;
          reverse = reverse*10 + rem;
          num /= 10;
     }

     printf("Reverse Number: %d", reverse);
     return 0;
}