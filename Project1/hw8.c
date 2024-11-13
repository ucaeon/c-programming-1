#include <stdio.h>
#include <math.h>

double cal(double arr[5]) {
    double mean = 0.0, sum = 0.0, variance = 0.0;

    for (int i = 0; i < 5; i++) {
        mean += arr[i];
    }
    mean /= 5;

    for (int i = 0; i < 5; i++) {
        sum += pow(arr[i] - mean, 2);
    }
    variance = sum / 5;

    return sqrt(variance);
}

int main(void) {
    double numbers[5];

    printf("Enter 5 real numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &numbers[i]);
    }

    double stdDev = cal(numbers);
    printf("Standard Deviation = %.3f\n", stdDev);
}
