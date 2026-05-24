#include <stdio.h>
#include <stdlib.h>

int main() {
    int bin, pw, ans, digit;
    scanf("%d", &bin);
    pw = 1;
    ans = 0;
    while (bin != 0) {
		digit = bin % 10;
        ans += (digit * pw);	
		bin /= 10;
		pw <<= 1;
    }
    printf("%d\n", ans);
    return 0;
}
