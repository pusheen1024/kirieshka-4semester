#include <stdio.h>
#include <signal.h>
#include <stdbool.h>
#include <time.h>

time_t t;
bool fl = 1;

void handler_1(int n) {
    printf("Hello, world!");
}

void handler_2(int n) {
    struct tm *result;
    result = localtime(&t);
    printf("%d:%d:%d", result->tm_hour, result->tm_min, result->tm_sec);
}

void handler_3(int n) {
    fl = 0;
}

int main() {
    freopen("myfile.txt", "w", stdout);
    t = time(NULL);
    signal(SIGHUP, handler_1);
    signal(SIGINT, handler_2);
    signal(SIGQUIT, handler_3);
    while (fl) {
    }
    return 0;
}
