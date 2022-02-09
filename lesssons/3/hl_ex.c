#include <stdio.h>
#include <string.h>

#define max(x, y) x > y ? x : y
#define min(x, y) x < y ? x : y

int main() {
	int n;
	scanf("%d", &n);

	const char* S = "Hello World";
	int len = strlen(S);
	int cnt = min(n, len);
	for (int i = 1; i <= cnt; i++) {
		for (int j = 0; j < i; j++) {
			putchar(S[j]);
		}
		putchar('\n');
	}

	return 0;
}
