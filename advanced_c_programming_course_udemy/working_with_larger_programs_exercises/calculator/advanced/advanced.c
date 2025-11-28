//
// Created by ivan on 29.10.25 г..
//

#include "advanced.h"
#include <math.h>



int onPower(int num, int power) {
    int i;
    int final = num;

    for (i = 1; i < power; i++) {
        final *= num;
    }

    return final;
}

double onRoot(int num) {
    return sqrt(num);
}