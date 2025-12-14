#include <stdio.h>
int main() {
     int x, sum=0;

     //DO_WHILE LOOP
     do{
          printf("Enter new number: ");
          scanf("%d", &x);
          if(x) sum = sum + x;
     }while(x);

     //FOR LOOP
     for(x=1; x; ){
          printf("Enter new number: ");
          scanf("%d", &x);
          if(x) sum+=x;
     }

     printf("Sum: %d", sum);
     return 0;
}