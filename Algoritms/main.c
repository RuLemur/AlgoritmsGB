//
//  main.c
//  Algoritms
//
//  Created by Aleksandr Pavlov on 16.12.2020.
//

#include <stdio.h>
//#include "lessonOne.h"
#include "lessonTwo.h"


int main(){
    
    //task 1
    char result[255];
    toTwo(12123, &result, 0);
    
    //task 2
        myPowFor(2,5);
    printf("%d^%d=%d\n", 5 ,3, myPowRecursion(5, 3));
    
    return 0;
}




/* lesson 1
//    bodyIndex(80, 1.78);
//    maxInFourDigits(6, 12, 1242, 112);
//    digitSwap(32,45,0);
//    squareEquation(1,12,36);
//    whatsOutsideTheWindow(11);
//    printAge(23);
//    chees(1,3,7,6);
//    multiplierRide(16,30);
//    strangeDivision(100,23);
//    checkOdd(0);
//    arithmeticAverage();
//    maxInThreeDigits(1, 23, 4);
//    randomer(13, 0);
//    avtomormfDigits(9376);
    
*/
