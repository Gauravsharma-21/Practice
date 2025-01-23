#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 4, 5,7,8,8};
    int len = sizeof(arr) / sizeof(int);
    int uarr[len]; 
    int i, j, cnt = 0;

    for (i = 0; i < len; i++) {
        int unique = 1;
        for (j = 0; j < cnt; j++) {
            if (arr[i] == uarr[j]) {
                unique = 0;
                break;
            }
        }
        if (unique) {
            uarr[cnt] = arr[i];
            cnt++; 
        }
    }
    printf("Unique elements: ");
    for (i = 0; i < cnt; i++) {
        printf("%d ", uarr[i]);
    }
    return 0;
}
