#include <stdio.h>
#include <signal.h>
#include <stdbool.h>

void handler(int n) {
    printf("Signal N = %d received\n", n);
}

int main() {
    signal(SIGINT, handler);
    signal(SIGHUP, handler);
    signal(SIGQUIT, handler);
    while (true) {
    }
    return 0;
}
