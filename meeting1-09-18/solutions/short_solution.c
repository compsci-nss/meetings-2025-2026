#include <stdio.h>

int main() {
	int N, C, P;
	scanf("%d\n%d\n%d", &N, &C, &P);
	puts((N <= C * P) ? "yes" : "no");
}
