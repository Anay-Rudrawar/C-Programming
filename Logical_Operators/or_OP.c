#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(a > 0 || b > 0) {
        printf("one number is positive");
    } else {
        printf("Both numbers are negative or zero");
    }

    return 0;
}
