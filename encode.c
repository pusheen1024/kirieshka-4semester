#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    char buffer[100];
    int i, shift;
    freopen(argv[1], "r", stdin);
    shift = atoi(argv[2]);
    while (fread(buffer, sizeof(*buffer), 100, stdin)) {
        for (i = 0; i < 100; i++) {
            printf("%c", (buffer[i] + shift) % 26);
		}
    }
}
