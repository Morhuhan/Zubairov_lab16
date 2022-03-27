#include <stdio.h>

typedef struct _complexn {
	int r, i;
} complexn;

complexn operator-(complexn a, complexn b) {

	complexn result;

	result.r = a.r - b.r;

	result.i = a.i - b.i;

	return result;

}

complexn operator-(complexn a, int b) {

	complexn result;

	result.r = a.r - b;

	result.i = a.i;

	return result;
}

int main() {

	complexn x = { 7, 8 }, y = { 3, 2 }, z;

	z = x - y;
	printf("%d + i%d\n", z.r, z.i);

	z = x - 3;
	printf("%d + i%d\n", z.r, z.i);

}