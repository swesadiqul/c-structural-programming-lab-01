#include <stdio.h>
#include <math.h>

int main(){
    int M, N, result;

    printf("Enter first integer number (M): ");
    scanf("%d", &M);

    printf("Enter second integer number (N): ");
    scanf("%d", &N);

    result = (int) pow(M, N);

    printf("%d ^ %d : %d", M, N, result);

    return 0;
}
