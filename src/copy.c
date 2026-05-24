#include <stdio.h>
#include <stdbool.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
    int count = 100;
    int to_read;
    char buf[count];
    int in, out;
    if (argc < 3) {
		printf("Too few arguments\n");
		return 0;
    }
    in = open(argv[1], O_RDONLY);
    out = open(argv[2], O_CREAT | O_WRONLY);
    while ((to_read = read(in, buf, count)) > 0) {
		write(out, buf, to_read);
    }
    close(in);
    close(out);
    return 0;
}
