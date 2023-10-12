#include <stdio.h>

int main() {
    int chocolates, each, remaining;

    printf("Enter the total number of chocolates: ");
    scanf("%d", &chocolates);

    each = chocolates / 3;
    printf("Each friend will receive %d chocolates\n", each);

    remaining = chocolates % 3;
    printf("Remaining chocolates for you %d\n", remaining);

    return 0;
}

