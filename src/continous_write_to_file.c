#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <signal.h>

void handler(int n) {
	printf("ok\n");
}

int main() {
    int i = 0;
    signal(SIGHUP, handler);
    while (true) {
		freopen("myfile.txt", "a", stdout);
		printf("%d\n", i);
		i++;
		i %= 10;
		sleep(1);
    }
    return 0;
}
