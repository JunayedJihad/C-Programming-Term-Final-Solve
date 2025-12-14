#include <stdio.h>
int main() {
     int a,b,c,d, temp, d_ab, d_bc, d_cd;
     printf("Enter 4 integers: ");
     scanf("%d%d%d%d", &a, &b, &c, &d);

     // Ascending order sequence
     //PASS 1
     if(a>b){
          temp = a;
          a = b ;
          b = temp;
     }
     if(b>c){
          temp = b;
          b = c ;
          c = temp;
     }
     if(c>d){
          temp = c;
          c = d;
          d = temp;
     }

     //PASS 2
     if(a>b){
          temp = a;
          a = b ;
          b = temp;
     }
     if(b>c){
          temp = b;
          b = c ;
          c = temp;
     }

     //PASS 3
     if(a>b){
          temp = a;
          a = b ;
          b = temp;
     }

     d_ab = b-a;
     d_bc = c-b;
     d_cd = d-c;

     printf("Ascending order: %d %d %d %d\n", a,b,c,d);
     if (d_ab == d_bc && d_bc == d_cd) printf("YES");
     else printf("NO");

     return 0;
}