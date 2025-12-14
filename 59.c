#include <stdio.h>
#include <math.h>
int main() {
     int n;
     long long sum = 0; // The sum could be quite big number !!!!!
     printf("How many terms? ");
     scanf("%d", &n);

     for(int i=1; i<=n; i++){
          sum += pow(i,i+1);
     }

     printf("Sum upto %d terms = %lld", n, sum);
     return 0;
}