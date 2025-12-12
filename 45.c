#include <stdio.h>
int main() {
     int n;
     float price, p1, p2, p3;
     printf("How many units you have bought? ");
     scanf("%d", &n);

     if(n<=100){
          price = n*1;
     }
     else if(n>100 && n<=250){
          price = (100*1) + (n-100)*1.25;
     }
     else if(n>250){
          price = (100*1) + (150*1.25) + (n-250)*1.5;
     }

     printf("Total price: %.2f taka", price);
     return 0;
}