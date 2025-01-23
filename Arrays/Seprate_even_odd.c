#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int even[10], odd[10], e = 0, o = 0, i;

    for (i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            even[e++] = arr[i];
        } else {
            odd[o++] = arr[i];
        }
    }

    printf("Even Array: ");
    for (i = 0; i < e; i++) {
        printf("%d ", even[i]);
    }

    printf("\nOdd Array: ");
    for (i = 0; i < o; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}
