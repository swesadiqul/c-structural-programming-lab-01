#include <stdio.h>

int main() {
    int A;

    printf("Enter any integer number: ");
    scanf("%d", &A);

    if(A % 2 == 0){
        printf("True");
    }else{
        printf("False");
    }

    return 0;
}
