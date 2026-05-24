#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int i;
    if (argc < 2) return 0;
    int n = atoi(argv[1]);
    for (i = 0; i < n; i++) {
    	printf("Hello, world!\n");
    }
    return 0;
}
