#include <stdio.h>
int main() {
     int n;
     printf("How many rows? ");
     scanf("%d", &n);
     int a = 1;

     for(int i=1; i<=n; i++){
          for(int j=1; j<=(2*n-1); j++){
               if(j>=(n-(i-1)) && j<=(n+(i-1))) {
                    printf("%3d", a);
                    a+=2;
               }
               else printf("   "); //for the alignment
          }
          printf("\n");
     }
     return 0;
}