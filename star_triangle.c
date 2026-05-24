#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, n;
    scanf("%d", &n);
    for (i = 0; i < 2 * n + 1; i++) {
    	for (j = 0; j <= (i < n ? i : 2 * n - i); j++) {
	    	printf((j % 2 == 0 ? "*" : "."));
		}
		printf("\n");
    }
    return 0;
}
