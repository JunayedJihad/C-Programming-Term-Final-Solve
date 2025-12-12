#include <stdio.h>
int main() {
     int x, b =7;
     x = b > 8 ? b < 3 ? b << 3 : b > 4 ? b >> 1 : b : b+5;
     printf("x = %d", x);
     return 0;
}