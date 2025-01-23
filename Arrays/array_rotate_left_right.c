#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int temp, choice;

    printf("Original Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Choose rotation direction:\n");
    printf("1. Left Rotate\n");
    printf("2. Right Rotate\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        temp = arr[0];
        for (int i = 0; i < 4; i++) {
            arr[i] = arr[i + 1];
        }
        arr[4] = temp;
    } else if (choice == 2) {
        temp = arr[4];
        for (int i = 4; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
    } else {
        printf("Invalid choice. Exiting.\n");
        return 1;
    }

    printf("Rotated Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
