#include <stdio.h>

void rec(int x) {
	if (x != 0)
		printf("%d\n", x) || rec(x-1);
}

void main() {
	rec(10);
}
