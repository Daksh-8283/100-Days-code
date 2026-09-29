#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    if (n == 0) {
        printf("1");
        return 0;
    }

    while (n > 0) {
        int bit = n % 10;
        printf("%d", bit == 0 ? 1 : 0);
        n /= 10;
    }

    return 0;
}
