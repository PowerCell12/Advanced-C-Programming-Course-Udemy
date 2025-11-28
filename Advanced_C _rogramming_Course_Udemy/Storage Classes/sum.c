//
// Created by ivan on 7.11.25 г..
//
#include <stdio.h>

int sum(int num) {
    static int sum;

    sum += num;

    return sum;
}
