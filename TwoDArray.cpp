//
// Created by hloi on 2/15/2024.
//
#include <iostream>

#include "TwoDArray.h"

using namespace std;

void set_row(double *the_array, int row, int col, double row_vals[]) {
  for (int i = 0; i < col; i++)      
      *(the_array + row * col + i) = *(row_vals+i);
}

/** Return the specified row */
double* get_row(double *the_array, int row, int col) {
  return (the_array + row * col);
}
