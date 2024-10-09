#include <stdio.h>

void bin(int n) {
    if (n > 1) {
        bin(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int number;
    printf("Please enter a number: ");
    scanf("%d", &number);

    bin(number);

    return 0;
}
