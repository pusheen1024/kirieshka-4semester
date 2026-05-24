#include <stdio.h>
#include <stdlib.h>

int to_dec(int bin) {
    int pw, ans, digit;
    pw = 1;
    ans = 0;
    while (bin != 0) {
		digit = bin % 10;
        ans += (digit * pw);	
		bin /= 10;
		pw <<= 1;
    }
    return ans;
}

int add(int bin1, int bin2) {
    int d1, d2, d, carry, pw, ans;
    pw = 1;
    carry = 0;
    ans = 0;
    while (bin1 != 0 && bin2 != 0) {
        d1 = bin1 % 10;
		d2 = bin2 % 10;
		d = (d1 + d2 + carry) % 2;
		carry = (d1 + d2 + carry) / 2;
		ans += (d * pw);
		bin1 /= 10;
		bin2 /= 10;
		pw *= 10;
    }
    if (bin1 == 0) bin1 = bin2;
    while (bin1 != 0) {
        d1 = bin1 % 10;
		d = (d1 + carry) % 2;
		carry = (d1 + carry) / 2;
		ans += (d * pw);
		bin1 /= 10;
		pw *= 10;
    }
    while (carry) {
		ans += (carry % 2) * pw;
		carry /= 2;
		pw *= 2;
    }
    return ans;
}

int main() {
    int num1, num2, ans, nd1, nd2, ansd;
    scanf("%d", &num1);
    scanf("%d", &num2);
    ans = add(num1, num2);
    printf("Sum: %d\n", ans);
    nd1 = to_dec(num1);
    nd2 = to_dec(num2);
    ansd = to_dec(ans);
    printf("%d\n", nd1);
    printf("%d\n", nd2);
    printf("My sum: %d\n", ansd);
    printf("Sum: %d\n", nd1 + nd2);
    return 0;
}
