#include <stdio.h>
int main() {
     int n;
     printf("Enter an odd integer (not more than 5): ");
     scanf("%d", &n);
     if(n<1 || n>5 || n%2==0) {
          printf("INVALID INPUT");
          return -1;
     }

     for(int i=1; i<=n; i++){
          for(int j=1; j<=(2*i - 1); j++){
               printf("%d", j);
          }
          printf("\n");
     }
     return 0;
}