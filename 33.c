#include <stdio.h>

int main() {
    int n, original, temp, digit, count = 0;
    int sum = 0, power, i;

    scanf("%d", &n);
    original = n;
    temp = n;

    if (n == 0)
        count = 1;
    else
        while (temp != 0) {
            count++;
            temp /= 10;
        }

    temp = n;
    while (temp != 0) {
        digit = temp % 10;
        power = 1;
        for (i = 0; i < count; i++)
            power *= digit;
        sum += power;
        temp /= 10;
    }

    if (sum == original)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}

