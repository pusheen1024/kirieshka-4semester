#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int sig = atoi(argv[1]);
    int pid = atoi(argv[2]);
    kill(pid, sig);
}
