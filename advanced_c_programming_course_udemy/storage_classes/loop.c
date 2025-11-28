//
// Created by ivan on 7.11.25 г..
//
#include <stdio.h>

int loopCounter = 0;

int display();

int iterate() {

    for (; loopCounter < 5; loopCounter++) {
        printf("%d\n", display());
    }

    return 1;
}