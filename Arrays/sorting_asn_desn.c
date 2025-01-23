#include <stdio.h>

int main() {
    int arr[5] = {2, 1, 4, 3, 5};
    int choice;

    printf("Choose sorting order:\n");
    printf("1. Ascending Order\n");
    printf("2. Descending Order\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if ((choice == 1 && arr[j] > arr[j + 1]) || (choice == 2 && arr[j] < arr[j + 1])) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array: ");
    for (int m = 0; m < 5; m++) {
        printf("%d ", arr[m]);
    }

    return 0;
}
