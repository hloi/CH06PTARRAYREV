/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newCxxTest.h
 * Author: hloi
 *
 * Created on January 26, 2018, 3:52 PM
 */

#ifndef NEWCXXTEST_H
#define NEWCXXTEST_H

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
#include "TwoDArray.h"
#include <iostream>
using namespace std;

class newCxxTest : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    //the name of the function being tested.

    void testMyFunction() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
        int size = 5;
        int newSize = size*2;
        int* arr = new int[size];  // use square brackets
        for (int i=0; i<size; i++) {
            *(arr+i) = i;
        }
        print(arr,size);

        arr = expand(arr, size);

        print(arr, newSize);

        int testar[] = {0,1,2,3,4,0,0,0, 0, 0};
        for (int i=0; i<newSize; i++) {
            cout << *(arr+i) << "    " << *(testar+i) << endl;
            TS_ASSERT(*(arr+i) == *(testar+i));
        }
    }
};
#endif /* NEWCXXTEST_H */
