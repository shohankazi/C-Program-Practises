#include<stdio.h>

int main() {
    int i, original, remainder, sum,n;
    printf("Armstrong numbers from 1 to n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        original = i;
        sum = 0;

        while (original != 0) {
            remainder = original % 10;
            sum += remainder * remainder * remainder;
            original = original / 10;
        }

        if (i == sum) {
            printf("%d\n", i);
        }
    }

    return 0;
}
