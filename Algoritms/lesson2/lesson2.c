//
//  lesson2.c
//  Algoritms
//
//  Created by Aleksandr Pavlov on 21.12.2020.
//

#include "lesson2.h"
#include <string.h>
#include <stdlib.h>

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
