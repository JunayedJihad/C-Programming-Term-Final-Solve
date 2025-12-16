#include <stdio.h>
#include <math.h>
int main() {
     int a,b;
     printf("Enter a and b: ");
     scanf("%d %d", &a, &b);

     long long sum = (a-1);;
     for(int i=0; i<=b; i++){
          if(i%2 == 0){
               sum = sum + pow((a-i),i);
          }else{
               sum = sum - pow((a-i),i);
          }
     }

     printf("Sum = %lld", sum);
     return 0;
}