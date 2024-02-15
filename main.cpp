#include <iostream>

using namespace std;


//int add(int a, int b) {
//    return a + b;
//}
//
//void add(int a, int b, int &c) {
//    c = a + b;
//}
//
//void addpt(int a, int b, int *c) {
//    *c = a + b;
//}
//
//
//int main() {
//
//    int a = 5;
//    int b = 10;
//    int n;
//
//    n = add(a, b);
//    cout << "n: " << n << endl;
//
//    n = 0;
//    add(a, b, n);
//    cout << "n: " << n << endl;
//
//    n = 0;
//    addpt(a, b, &n);
//    cout << "n: " << n << endl;
//
//    int* c = new int;
//    *c = 20;
//    delete c;
//    return 0;
//}
int* expand(int* ar, int size) {
    int newSize = size*2;  // double the size
    int* arr = new int[newSize]; // use square parenthesis
    for (int i=0; i<size; i++) {
        *(arr+i) = *(ar+1);
    }
    delete ar;  // delete old array
    return arr; // return new array

}


void print(int *ar, int size) {
    for (int i=0; i<size; i++) {
        cout << *(ar + i) << endl;
    }
}

//int main() {
//    int size = 5;
//    int arr[5] = {5,2,3,4,5};
//
//    cout << arr << endl;
//    cout << arr + 1 << endl;
//    cout << arr + 2 << endl;
//    cout << arr + 3 << endl;
//    cout << arr + 4 << endl;
//    cout << arr + 5 << endl;
//
////    cout << *arr << endl;
////    cout << *arr + 1 << endl;
////    cout << *(arr + 1) << endl;
////
//    print(arr, 5);
//
//    size = size * 2;
//    arr = expand(arr, 5);
//
//    return 0;
//}


int main() {
    int size = 5;
    int* arr = new int(size);
    for (int i=0; i<5; i++) {
        *(arr+i) = i;
    }
    print(arr,size);

    arr = expand(arr, size);
    size = size * 2;
    print(arr, size);
}