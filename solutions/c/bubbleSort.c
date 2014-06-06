#include <stdio.h>

void bubbleSort(int *arr, int arr_length) {
    int is_sorted=0;
    while (is_sorted==0) {
        is_sorted=1;
        for (int i=0;i<arr_length-1;i++) {
            if (arr[i] > arr[i+1]) {
                int t = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = t;
                is_sorted=0;
            }
        }
    }
}

int main(int argc, char *argv[]) {
    int arr[9] = {3, 1, 5, 4, 20, 7, 6, 10, 9};
    for (int i = 0; i < 9; i++) {
        printf("%d, ", arr[i]);
    } 
    printf("\n");
    bubbleSort(arr, 9);
    for (int i = 0; i < 9; i++) {
        printf("%d, ", arr[i]);
    } 
}