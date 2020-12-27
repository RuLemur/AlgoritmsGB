//
//  lessonTwo.c
//  Algoritms
//
//  Created by Aleksandr Pavlov on 21.12.2020.
//

#include "lessonTwo.h"
#include <string.h>
#include <stdlib.h>

/*
 1. Реализовать функцию перевода из десятичной системы в двоичную, используя рекурсию.
 */
void toTwo(int dig, char (*result)[], int len){
    
    if (dig <= 1) {
        (*result)[len++] = dig + '0';
        int i;
        for(i = 0; i < len; i++) {
            printf("%c", (*result)[len - i - 1]);
        }
        printf("\n");
        return;
    } else {
        (*result)[len] = (dig % 2) + '0';

        return toTwo(dig / 2, result, ++len);
    }
}

/*

 a. без рекурсии;
 */
int myPowFor(int a, int b){
    int res = 1;
    int i;
    
    for (i=0; i<b; i++) {
        res = res * a;
    }
    return res;
}

/*
 2. Реализовать функцию возведения числа a в степень b:

 b. рекурсивно;
 */
int myPowRecursion( int a, int b){
    if (b == 0) {
        return 1;
    }
    return a * myPowRecursion(a, b - 1);
}

