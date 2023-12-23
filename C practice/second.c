#include <stdio.h>
int main() {
    double distanceInKm;
    printf("Enter the distance between two cities in kilometers: ");
    scanf("%lf", &distanceInKm);
    double meters = distanceInKm * 1000;
    double feet = distanceInKm * 3280.84; // 1 meter = 3.28084 feet
    double inches = distanceInKm * 39370.1; // 1 meter = 39.3701 inches
    double centimeters = distanceInKm * 100000;
    printf("Distance in meters: %.2f m\n", meters);
    printf("Distance in feet: %.2f ft\n", feet);
    printf("Distance in inches: %.2f in\n", inches);
    printf("Distance in centimeters: %.2f cm\n", centimeters);
    return 0;
}
