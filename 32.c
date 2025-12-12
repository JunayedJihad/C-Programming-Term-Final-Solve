#include <stdio.h>
int main() {
     int a,b,c,d,min,max;
     printf("enter 4 integers: ");
     scanf("%d%d%d%d", &a, &b, &c, &d);

     max = a;
     if (b>max) max = b;
     if (c>max) max = c;
     if (d>max) max = d;

     min = d;
     if (a<min) min = a;
     if (b<min) min = b;
     if (c<min) min = c;

     printf("Max = %d and Min = %d", max, min);

     return 0;
}