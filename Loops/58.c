#include <stdio.h>
int main() {
	int n;
	int isFound=0;
	printf("Enter n: ");
	scanf("%d", &n);

	for(int i=1; i<=n; i++) {
		int sum = 0;
		for(int j=1; j<i; j++) {
			if(i%j==0) {
				sum = sum + j;
			}
		}
		if(sum==i) {
			if(isFound==0) {
				printf("Perfect numbers from 1 to %d:\n", n);
			}
			printf("%d ", i);
			isFound=1;
		}
	}

	if(isFound==0) {
		printf("No perfect number in this range");
	}
	return 0;
}