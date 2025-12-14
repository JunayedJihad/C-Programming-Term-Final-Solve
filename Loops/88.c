
#include <stdio.h>
int main() {
    int i, j ,k;
    for(i=1; i<=2; i++){
        for(j=1; j<=3; j++){
            for(k=0; k<=2; k++) printf("*");
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}