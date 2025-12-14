#include <stdio.h>

int main() {
    int x1, y1, a, x, y;

    printf("Enter the position of bottom-left corner: ");
    scanf("%d %d", &x1, &y1);

    printf("Length of the side of the square: ");
    scanf("%d", &a);

    printf("Enter the position of query point: ");
    scanf("%d %d", &x, &y);

    // Check if point is inside or on the boundary
    if (x >= x1 && x <= (x1 + a) && y >= y1 && y <= (y1 + a)) {
        printf("INSIDE\n");
    }
    else {
        printf("OUTSIDE\n");
    }

    return 0;
}