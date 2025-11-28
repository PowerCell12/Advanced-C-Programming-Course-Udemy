//
// Created by ivan on 10.11.25 г..
//
#include <stdio.h>
#include <malloc.h>

struct myArray {
    int length;
    int arr[];
};

void printArrElements() {
    int size;

    scanf("%d", &size);

    struct myArray *currStruct = malloc(sizeof(struct myArray) + size * sizeof(int));

    int i;

    for (i = 0; i < size; i++) {
        currStruct->arr[i] = 1;
    }

    int j;

    for (j = 0; j < size; j++) {
        printf("%d ", currStruct->arr[j]);
    }

    free(currStruct);
}