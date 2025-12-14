#include <stdio.h>
int main() {
     int x1,y1,x2,y2,x,y;
     printf("Top-Left corner: ");
     scanf("%d%d", &x1, &y1);
     printf("Bottom-Right corner: ");
     scanf("%d%d", &x2, &y2);
     printf("Query Point: ");
     scanf("%d%d", &x, &y);

     if(x>=x1 && x<=x2 && y>=y2 && y<=y1) printf("INSIDE\n");
     else printf("OUTSIDE\n");
     return 0;
}