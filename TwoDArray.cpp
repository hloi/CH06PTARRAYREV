//
// Created by hloi on 2/15/2024.
//
#include <iostream>

#include "TwoDArray.h"

using namespace std;

int* expand(int* ar, int size) {
    int newSize = size*2;  // double the size
    int* arr = new int[newSize]; // use square parenthesis
    for (int i=0; i<size; i++) {
        *(arr+i) = *(ar+i);
    }
    for (int i=size; i<newSize; i++) {
        *(arr+i) = 0;
    }
    delete ar;  // delete old array
    return arr; // return new array

}


void print(int *ar, int size) {
    for (int i=0; i<size; i++) {
        cout << *(ar + i) << endl;
    }
}