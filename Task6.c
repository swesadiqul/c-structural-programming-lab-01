#include <stdio.h>

int main() {
    int totalWeight, maxLoad;

    printf("Enter the total weight of the shipment : ");
    scanf("%d", &totalWeight);

    maxLoad = (totalWeight / 4) * 4;

    printf("%d\n", maxLoad);

    return 0;
}
