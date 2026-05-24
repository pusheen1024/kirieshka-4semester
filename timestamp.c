#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm *result;
    result = localtime(&t);
    printf("%d:%d:%d", result->tm_hour, result->tm_min, result->tm_sec);
    return 0;
}

