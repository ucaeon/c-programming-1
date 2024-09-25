#include <stdio.h>

int main(void) {
    double kilometers, miles;

    printf("Please enter kilometers: ");
    scanf("%lf", &kilometers);
    
    miles = kilometers / 1.609;

    printf("%.1f km is equal to %.1f miles.\n", kilometers, miles);

    return 0;
}