#include <stdio.h>

int main() {
	int n, tmp, s = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	for (int i=1; i<=n; i++) {
		printf("Nhap so: ");
		scanf("%d", &tmp);
		//printf("\n");
		s += tmp;
	}
	printf("Sum: %d", s);
}