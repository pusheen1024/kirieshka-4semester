#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int main(int argc, char* argv[]) {
    pid_t fr;
    freopen("test.txt", "a", stdout);
    argv[0][6] = '0';
    while (true) {
		printf("%d\n", getpid());
		sleep(1);
		fr = fork();
		argv[0][6] = (char)(argv[0][6] + 1);
		if (argv[0][6] > '9') argv[0][6] = '0';
		if (fr == 0) execl("a.out", argv[0], NULL);
		else exit(0);
    }
    return 0;
}
