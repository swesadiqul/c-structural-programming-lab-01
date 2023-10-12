#include <stdio.h>
#include <math.h>

int main() {
    int A, B, C, result;
    float D;

    printf("Enter first integer number (A): ");
    scanf("%d", &A);

    printf("Enter second integer number (B): ");
    scanf("%d", &B);

    printf("Enter third integer number (C): ");
    scanf("%d", &C);

    printf("Enter forth floating-point number (D): ");
    scanf("%f", &D);


    result = pow(A, C) + (B * A) - (D / 3);

    printf("Result is : %d\n", result);

    return 0;
}

