#include <stdio.h>

int main() {
    int arr1[10], arr2[10], sum[10];
    int i;

    printf("Enter 10 elements for first array:\n");
    for(i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }
}    