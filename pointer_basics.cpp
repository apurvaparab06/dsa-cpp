
// Introduces pointers by writing a swap function that works via pointers
// instead of references, plus basic pointer arithmetic on an array.

#include <iostream>
using namespace std;

void swapUsingPointers(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArrayUsingPointer(int arr[], int size) {
    int* ptr = arr; // pointer to first element

    for (int i = 0; i < size; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
}

int main() {
    int x = 5, y = 10;
    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swapUsingPointers(&x, &y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    int arr[] = {1, 2, 3, 4, 5};
    cout << "Array elements using pointer: ";
    printArrayUsingPointer(arr, 5);

    return 0;
}
