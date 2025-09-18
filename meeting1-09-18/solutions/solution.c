#include <stdio.h>

int main() {
	int N, C, P;

	scanf("%d", &N);
	scanf("%d", &C);
	scanf("%d", &P);

	if (N <= C * P) puts("yes");
	else puts("no");

	return 0;
}
