#include <stdio.h>
int main() {
     float cx, cy, px, py, rad, sqrrad, sqrdis, delx, dely;
     printf("Center coordinate: ");
     scanf("%f%f", &cx, &cy);
     printf("Center radius: ");
     scanf("%f", &rad);
     printf("Point Coordinate: ");
     scanf("%f%f", &px, &py);

     delx = px-cx;
     dely = py-cy;
     sqrdis = delx*delx + dely*dely;
     sqrrad = rad*rad;

     if(sqrdis == sqrrad) printf("ON");
     if(sqrdis < sqrrad) printf("INSIDE");
     if(sqrdis > sqrrad) printf("OUTSIDE");

     return 0;
}