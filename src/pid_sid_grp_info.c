#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/types.h>

int main() {
    pid_t pid = getpid();
    pid_t ppid = getppid();
    pid_t sid = getsid(0);
    pid_t ssid = getsid(pid);
    pid_t grp = getpgrp();
    pid_t pgrp = getpgid(pid);
    printf("%d %d\n", pid, ppid);
    printf("%d %d\n", sid, ssid);
    printf("%d %d\n", grp, pgrp);
    while (true) {
    }
}
