#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/types.h>
void handler(int n) {
	printf("ok\n");
}

int main(int argc, char* argv[]) {
    int i = 0;
    signal(SIGHUP, handler);
    freopen("myfile.txt", "a", stdout);
    pid_t fr = fork();
    system(argv[0]);
    if (fr != 0) {
		while (true) {
			printf("%d\n", i);
			i++;
			i %= 10;
			sleep(1);
		}
	}
    else exit(0);
    return 0;
}
