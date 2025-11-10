#include <stdio.h>
//
// Created by ivan on 10.11.25 г..
//

int findSumOfVariableLengthArrays() {
    int arrSize;

    scanf("%d", &arrSize);

    int arr[arrSize];

    int i;

    for (i = 0; i < arrSize; i++) {
        int num;

        scanf("%d", &num);

        arr[i] = num;
    }

    int sum = 0;

    int j;

    for (j = 0; j < arrSize; j++) {
        sum += arr[j];
    }

    return sum;
}