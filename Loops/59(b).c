#include <stdio.h>
int main() {
     int n;
     double sum=0;
     printf("Enter n: ");
     scanf("%d", &n);

     for(int i=1; i<=n; i++){
          if(i%2 == 0){ //negative with even terms
               sum = sum - (1.0/(i*i)); //use float division
          }else{
               sum = sum + (1.0/(i*i)); //use float division
          }
     }

     printf("Sum = %lf", sum);
     return 0;
}