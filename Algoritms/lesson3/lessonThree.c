//
//  lessonThree.c
//  Algoritms
//
//  Created by Aleksandr Pavlov on 27.12.2020.
//

#include "lessonThree.h"

/*
 Павлов Александр
 
 1. Попробовать оптимизировать пузырьковую сортировку. Сравнить количество операций сравнения оптимизированной и не оптимизированной программы. Написать функции сортировки, которые возвращают количество операций.
 */
void boobleSort(int (*arr)[], int n){
    int compCount = 0;
    int changeCount = 0;
    
    for (int j=0; j<n; j++) {
        for (int i=0; i<n-1; i++) {
            compCount++;
            if ((*arr)[i] > (*arr)[i+1]){
                changeCount++;
                (*arr)[i] = (*arr)[i] + (*arr)[i+1];
                (*arr)[i+1] = (*arr)[i] - (*arr)[i+1];
                (*arr)[i] = (*arr)[i] - (*arr)[i+1];
            }
        }
    }
    
    printf("booble asymptotic complexity: O(n^2)=%d\n", n*n);
    printf("booble comparation count: %d\nChange count: %d\n", compCount, changeCount);
}


void boobleSortOptimized(int (*arr)[], int n){
    int compCount = 0;
    int changeCount = 0;
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n-i-1; j++) {
            compCount++;
            if ((*arr)[j] > (*arr)[j+1]){
                changeCount++;
                (*arr)[j] = (*arr)[j] + (*arr)[j+1];
                (*arr)[j+1] = (*arr)[j] - (*arr)[j+1];
                (*arr)[j] = (*arr)[j] - (*arr)[j+1];
                
            }
        }
    }
    
    printf("booble optimized asymptotic complexity: O(n^2)=%d\n", n*n);
    printf("booble optimized comparation count: %d\nChange count: %d\n", compCount, changeCount);
}

/*
 3. Реализовать бинарный алгоритм поиска в виде функции, которой передается отсортированный массив. Функция возвращает индекс найденного элемента или -1, если элемент не найден.
 */

int binarySearch(int arr[], int n, int element){
    int left=0;
    int right=n-1;
    int findInd=right/2;
    while (left <= right && arr[findInd]!=element) {
        if (arr[findInd] < element){
            left = findInd + 1;
        } else {
            right = findInd - 1;
        }
        findInd = left + (right - left)/2;
    }
    if (arr[findInd]==element){
        return findInd;
    } else{
        return -1;
    }
}


/*
 2. *Реализовать шейкерную сортировку.
 */

void swap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void shakeSort(int (*arr)[], int n){
    int compCount = 0;
    int changeCount = 0;
    int loopChangeCount = 0;
    
    for (int i=0; i < n/2; i++) {
        for (int j=i; j<n-1-i; j++) {
            
            if ((*arr)[j] > (*arr)[j+1]){
                loopChangeCount++;
                swap(&(*arr)[j], &(*arr)[j+1]);
            }
            compCount++;
            
        }
        for (int j=n-i-2; j>=i-1; j--) {
            
            if ((*arr)[j] > (*arr)[j+1]){
                loopChangeCount++;
                swap(&(*arr)[j], &(*arr)[j+1]);
            }
            compCount++;
            
        }
        
        if (loopChangeCount > 0 ){
            changeCount += loopChangeCount;
            loopChangeCount = 0;
        } else {
            break;
        }
        
        
    }
    printf("shake asymptotic complexity: O(n^2)=%d\n", n*n);
    printf("shake Comparation count: %d\nChange count: %d\n", compCount, changeCount);

}
