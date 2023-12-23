#include <stdio.h>
#include <math.h>

int main() {
    float length, breadth, radius;
    float rectangleArea, rectanglePerimeter, circleArea, circleCircumference;
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of the rectangle: ");
    scanf("%f", &breadth);
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);
    rectangleArea = length * breadth;
    rectanglePerimeter = 2 * (length + breadth);
    circleArea = M_PI * radius * radius;
    circleCircumference = 2 * M_PI * radius;
    printf("\nRectangle:\n");
    printf("Area: %.2f\n", rectangleArea);
    printf("Perimeter: %.2f\n", rectanglePerimeter);
    printf("\nCircle:\n");
    printf("Area: %.2f\n", circleArea);
    printf("Circumference: %.2f\n", circleCircumference);
    return 0;
}
