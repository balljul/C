#include <stdio.h>
#include <stdlib.h>

void reverseArray(int arr[], int size){
    int *newArr = (int *)malloc(size * sizeof(int));
    
    
    if (newArr == NULL){
        printf("Memory Allocation failed!\n");
    }
    
    for(int i = 0, j = (size-1); i < size; i++, j--){
        newArr[i] = arr[j];
    }

    printf("Original Array: \n");
    for(int i = 0; i < size; i++){
        printf("- %d \n", arr[i]);
    }

    printf("Reversed Array: \n");
    for(int i = 0; i < size; i++) {
        printf("- %d \n", newArr[i]);
    } 
    free(newArr);
}

int main(void) {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, size);
    
    return 0;
}
