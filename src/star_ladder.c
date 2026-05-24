#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int i, j;
    int n = atoi(argv[1]);
    for (i = 0; i < n; i++) {
		for (j = 0; j <= i; j++) {
			printf((j % 2 == 0 ? "*" : "."));
		}
		printf("\n");
	}
    return 0;
}
