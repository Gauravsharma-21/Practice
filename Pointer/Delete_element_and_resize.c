#include <stdio.h>
#include <stdlib.h>


void remove_element(int **arr, int *size, int index) {
    for (int i = index; i < (*size - 1); i++) {
        (*arr)[i] = (*arr)[i + 1]; 
    }
    (*size)--; 
    int *temp = realloc(*arr, (*size) * sizeof(int)); 
    if (temp != NULL) {
        *arr = temp;
    } else {
        printf("Memory reallocation failed\n");
        exit(1);
    }
}

int main() {
    int *arr;
    int size, element_to_remove;
    size=10;
    arr = (int *)malloc(size * sizeof(int));

    for (int i = 0; i < size+1; i++) {
            *(arr+i)=i;
    }
    
    if(arr==NULL){
        printf("Memory not allocated");
        exit;
    }

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");


    printf("The original size of array:%d\n",size);

    printf("Enter the element to delete: ");
    scanf("%d", &element_to_remove);


    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    for (int i = 0; i < size;) {
        if (arr[i] == element_to_remove) {
            remove_element(&arr, &size, i); 
        } else {
            i++; 
        }
    }

    printf("Updated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("The original size of array after deletion:%d",size);

    free(arr);

    return 0;
}
