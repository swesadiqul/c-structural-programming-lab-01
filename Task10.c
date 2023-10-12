#include <stdio.h>

int main() {
    int A, C;
    float B;

    printf("Enter the first integer (A): ");
    scanf("%d", &A);

    printf("Enter a floating-point number (B): ");
    scanf("%f", &B);

    printf("Enter the second integer (C): ");
    scanf("%d", &C);

    // Perform the operations
    B += A;
    char result[100];

    snprintf(result, sizeof(result), "%.2f%d", B, C);


    printf("The inputs: %d, %.2f, %d\n", A, B, C);
    printf("The result is %s\n", result);

    return 0;
}
