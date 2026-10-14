#include <stdio.h>

int main() {
    double meters, kilometers, centimeters;
    
    printf("Enter distance in meters: ");
    scanf("%lf", &meters);
    
    // Expanding into multiple sub-units
    kilometers = meters / 1000.0;
    centimeters = meters * 100.0;
    
    printf("Distance in Kilometers: %lf\n", kilometers);
    printf("Distance in Centimeters: %lf\n", centimeters);
    
    return 0;
}
