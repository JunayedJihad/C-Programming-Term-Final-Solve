#include <stdio.h>
int main() {
     int n;
     printf("Enter n: ");
     scanf("%d", &n);

     printf("Prime numbers upto %d:\n", n);
     for(int i=2; i<=n; i++){
          int isPrime=1;
          for(int j=2; j*j<=i; j++){  //Donot need to check more than sqrt(i)
               if(i%j == 0){
                   isPrime=0;
                   break;
               }
          }
          if(isPrime){
               printf("%d ",i);
          }
     }
     return 0;
}