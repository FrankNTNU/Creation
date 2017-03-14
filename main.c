#include <stdio.h>

int main() {
	int x = 2;
	for(int i = 0; i < 10; ++i) {
		x *= 2;
	}
	printf("%d.\n", x);
	return 0;
// oops
}
