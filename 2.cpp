#include <stdio.h>
#include <limits.h>
const double r = 3.14;

int main() {
	long long n = LLONG_MAX;
	long n1 = LONG_MAX;
	int n2 = INT_MAX;
	char n3 = CHAR_MAX;
	printf("LONG LONG: %lld\n", n);
	printf("LONG LONG: %ld\n", n1); 
	printf("INT: %d\n", n2);
	printf("CHAR: %c\n", 97);
	printf("%f", r);
}