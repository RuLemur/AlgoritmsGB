//
//  main.c
//  Algoritms
//
//  Created by Aleksandr Pavlov on 16.12.2020.
//

#include <stdio.h>
#include "lessonThree.h"
#include <stdlib.h>
#include <sys/time.h>

void printArr(int arr[],int n) {
    for (int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void checkSort(int arr[], int n) {
    for (int i=0; i<n-1; i++) {
        if (arr[i] <= arr[i+1]) {
            continue;
        } else {
            printf("error\n");
            return;
        }
        
    }
    printf("ok\n");
}

int main(){
    int n = 25;
    int arr[n];
    int arr2[n];
    int arr3[n];
    for (int i=0; i < n; i++) {
        arr[i] = rand()%n + 1;
        arr2[i] = arr[i];
        arr3[i] = arr[i];
    }
    printf("unsorted array:\n");
    printArr(arr, n);
    
    printf("\nbooble sort array:\n");
    boobleSort(&arr, n);
    printArr(arr, n);
    
    printf("\nbooble optimized sort array:\n");
    boobleSortOptimized(&arr2, n);
    printArr(arr, n);
    
    printf("\nshake sort array:\n");
    shakeSort(&arr3, n);
    printArr(arr3, n);
    
    printf("\nfind index by binary search: %d \n", binarySearch(arr2, n, 1000));
    return 0;
}
