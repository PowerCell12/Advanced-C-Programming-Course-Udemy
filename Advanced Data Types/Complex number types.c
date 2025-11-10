//
// Created by ivan on 10.11.25 г..
//
#include <stdio.h>
#include <complex.h>
#include <tgmath.h>

void printComplexNumbers() {

    double complex first = 1.0 + 2.0 * _Complex_I * _Complex_I;

    double complex second = 1.0 + 2.0 * pow(_Complex_I, 2);

    double complex third = 1.0 + acos(-1) * _Complex_I;

    double complex fourth = 1.0 + 2.0 * _Complex_I;

    double complex fifth = conj(fourth);

    printf("%.2f; %.2f\n", creal(first), cimag(first));

    printf("%.2f; %.2f\n", creal(second), cimag(second));

    printf("%.2f; %.2f\n", creal(third), cimag(third));

    printf("%.2f; %.2f\n", creal(fourth), cimag(fourth));

    printf("%.2f; %.2f", creal(fifth), cimag(fifth));
}
