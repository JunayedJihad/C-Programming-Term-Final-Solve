#include <stdio.h>
int main() {
     int a,b,c;
     printf("Enter three integers: ");
     scanf("%d%d%d", &a, &b, &c);

     int med = (a>b) ? ((a<c)?(a):((b>c)?b:c)) : ((b<c)?(b):((a>c)?a:c));
     printf("Median = %d", med);
     return 0;
}