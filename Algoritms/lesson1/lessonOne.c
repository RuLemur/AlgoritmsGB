//
//  lessonOne.c
//  Algoritms
//
//  Created by Aleksandr Pavlov on 16.12.2020.
//

#include "lessonOne.h"
#include <math.h>
#include <stdlib.h>
#include <time.h>

/*
 1. Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I=m/(h*h);
 где m-масса тела в килограммах, h - рост в метрах.
 */
void bodyIndex(double weight, double height) {
    double i;
    i = weight / (height * height) ;
    printf("Body index is %0.2f\n", i);
}

/*
 2. Найти максимальное из четырех чисел. Массивы не использовать.
 */
void maxInFourDigits(int one, int two, int three, int four) {
    int max = one;
    if (max < two) max = two;
    if (max < three) max = three;
    if (max < four) max = four;
    
    printf("max: %d\n", max);
}

/*
 3. Написать программу обмена значениями двух целочисленных переменных:
 
 a. с использованием третьей переменной;
 b. *без использования третьей переменной.
 */
void digitSwap(int one, int two, int isSubDigit){
    printf("start values: one=%d, two%d\n", one, two);
    if (isSubDigit) {
        int c = one;
        one = two;
        two = c;
    } else {
        one = two + one;
        two = one - two;
        one = one - two;
    }
    
    printf("end values: one=%d, two%d\n", one, two);
}

/*
 4. Написать программу нахождения корней заданного квадратного уравнения.
 */
void squareEquation(int a, int b, int c){
    if (a == 0) {
        puts("Unvalid variable");
        return;
    }
    int d = (b * b) - 4 * a * c;
    if (d < 0) {
        puts("no roots");
        return;
    }
    if (d > 0){
        double x1, x2;
        x1 =((double)(0-b) + sqrt((double)d)) / (2 * (double)a);
        x2 =((double)(0-b) - sqrt((double)d)) / (2 * (double)a);
        printf("x1 = %0.2f, x2 = %0.2f\n", x1,x2);
    } else {
        double x;
        x =((double)(0-b) + sqrt((double)d)) / (2 * (double)a);
        printf("x = %0.2f\n", x);
        
    }
}

/*
 5. С клавиатуры вводится номер месяца. Требуется определить, к какому времени года он относится.
 */
void whatsOutsideTheWindow(int month){
    if (month < 1 || month > 12) {
        puts("Are you kidding me?");
        return;
    }
    if (month >= 3 && month <= 5) {
        puts("It's spring! Yay!");
        return;
    }
    if (month >= 6 && month <= 8) {
        puts("It's summer out there! Let's go swimming!");
        return;
    }
    if (month >= 9 && month <= 11) {
        puts("It's fall! hugh!");
        return;
    }
    puts("The damn winter is outside the window");
    
}

/*
 6. Ввести возраст человека (от 1 до 150 лет) и вывести его вместе с последующим словом «год», «года» или «лет».
 */
void printAge(int age){
    puts("Let's me speak from my heart");
    
    int indicator = (age % 10);
    if (indicator == 1){
        printf("%d год\n", age);
        return;
    }
    if (indicator >= 2 && indicator <= 4 && ((age % 100) >= 22 || (age % 100) <= 4)){
        printf("%d года\n", age);
        return;
    }
    printf("%d лет\n", age);
    
}

/*
 7. С клавиатуры вводятся числовые координаты двух полей шахматной доски (x1,y1,x2,y2). Требуется определить, относятся поля к одному цвету или нет.
 */
void chees(int x1, int y1, int x2, int y2) {
    int sum1 = x1 + y1;
    int sum2 = x2 + y2;
    
    if ((sum1 % 2) == (sum2 % 2)){
        puts("same color");
    } else {
        puts("different color");
    }
}

/*
 8. Ввести a и b и вывести квадраты и кубы чисел от a до b.
 */
void multiplierRide(int a, int b) {
    int digits_count = b - a + 1;
    int digit, square, cube, i;
    
    puts("|    digit     |   squares    |     cubes    |");
    for (i=0; i < digits_count; i++) {
        digit = (a + i);
        square = digit * digit;
        cube = square * digit;
        printf("|%14d|%14d|%14d|\n",digit, square, cube);
    }
}

/*
 9. Даны целые положительные числа N и K. Используя только операции сложения и вычитания, найти частное от деления нацело N на K, а также остаток от этого деления.
 */
void strangeDivision(int n, int k){
    int result = 0;
    int reserveN = n;
    
    while (n >= k) {
        result++;
        n -= k;
    }
    if (n == 0) {
        printf("%d / %d = %d\n", reserveN, k, result);
        return;
    }
    printf("%d / %d = %d (remainder = %d)\n", reserveN, k, result, n);
}

/*
 10. Дано целое число N (> 0). С помощью операций деления нацело и взятия остатка от деления определить, имеются ли в записи числа N нечетные цифры. Если имеются, то вывести True, если нет — вывести False.
 */
void checkOdd(int n){
    while (1) {
        if (n % 2 == 0){
            n = n / 10;
        } else {
            puts("True");
            return;
        }
        if (n<10){
            break;
        }
    }
    puts("False");
}

/*
 11. С клавиатуры вводятся числа, пока не будет введен 0. Подсчитать среднее арифметическое всех положительных четных чисел, оканчивающихся на 8.
 */
void arithmeticAverage(){
    int n, count = 0;
    puts("enter digits. 0 - exit");
    scanf("%d", &n);
    
    while (n) {
        if (n%10==8){
            count++;
        }
        scanf("%d", &n);
    }
    printf("Count: %d\n", count);
}

/*
 12. Написать функцию нахождения максимального из трех чисел.
 */
void maxInThreeDigits(int one, int two, int three){
    maxInFourDigits(one, two, three, three); // :-) DRY
}

/*
 13. * Написать функцию, генерирующую случайное число от 1 до 100.

 а) с использованием стандартной функции rand()
 б) без использования стандартной функции rand()
 */
void randomer(int seed, int isRand){
    if (isRand){
        srand((unsigned int)time(NULL));
        printf("Rand() random: %d\n", rand() % 100);
    } else {
        int rand;
        long timeInMs = time(NULL);
        rand = (3 * (timeInMs % seed) + 2) % 100 + 1;
        printf("Rand() random: %d\n", rand);
    }
}

/*
 14. *Автоморфные числа. Натуральное число называется автоморфным, если оно равно последним цифрам своего квадрата. Например, 252 = 625. Напишите программу, которая вводит натуральное число N и выводит на экран все автоморфные числа, не превосходящие N.
 */
void avtomormfDigits(int n){
    int i, square, checkDig;
    int isFind=0;
    printf("Avt gigits: 0(0) ");
    for (i = 0 ; i <= n; i++) {
        square = i * i;
        checkDig = i;
        
        while (checkDig != 0) {
            if (square % 10 == checkDig % 10){
                square /= 10;
                checkDig /= 10;
                isFind=1;
            } else {
                isFind = 0;
                break;
            }
        }
        if (isFind){
            printf("%d(%d) ", i, i * i);
            isFind = 1;
        }
    }
    puts("");
}

