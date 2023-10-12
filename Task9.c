#include <stdio.h>
#include <string.h>

int main() {
    char M[100], N[100];

    printf("Enter the first value (M): ");
    scanf("%s", M);

    printf("Enter the second value (N): ");
    scanf("%s", N);

    int lengthM = strlen(M);
    int lengthN = strlen(N);

    for (int i = 0; i < lengthM; i++) {
        N[lengthN] = M[i];
        lengthN++;
    }
    N[lengthN] = '\0';

    printf("Result: %s\n", N);

    return 0;
}
