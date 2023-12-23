#include <stdio.h>
int main() {
    int marks[5];
    int i;
    int totalMarks = 0;
    float percentage;
    for (i = 0; i < 5; i++) {
        printf("Enter marks for subject %d (out of 100): ", i + 1);
        scanf("%d", &marks[i]);
        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid input. Marks should be between 0 and 100.\n");
            return 1; // Exit with an error code
        }
        totalMarks += marks[i];
    }
    percentage = (float)totalMarks / (5 * 100) * 100;
    printf("Aggregate marks: %d\n", totalMarks);
    printf("Percentage marks: %.2f%%\n", percentage);
    return 0;
}
