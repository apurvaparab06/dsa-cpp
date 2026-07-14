/*
 * Program: Array Even-Odd Operations
 * ------------------------------------------
 * Demonstrates working with array values and indices:
 *   1. Display even and odd values from the array
 *   2. Display values at even and odd indices
 *   3. Count the total even and odd values in the array
 *
 * Author: Apurva
 */

#include <iostream>
using namespace std;

// Function declarations
void inputArray(int arr[], int n);
void displayEvenOddValues(int arr[], int n);
void displayEvenOddIndexValues(int arr[], int n);
void countEvenOddValues(int arr[], int n);

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:\n";
    inputArray(arr, n);

    cout << "\n--- Even and Odd Values ---\n";
    displayEvenOddValues(arr, n);

    cout << "\n\n--- Even and Odd Index Values ---\n";
    displayEvenOddIndexValues(arr, n);

    cout << "\n\n--- Count of Even and Odd Values ---\n";
    countEvenOddValues(arr, n);

    cout << endl;
    return 0;
}

// Takes n elements as input and stores them in the array
void inputArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

// Displays even and odd values present in the array
void displayEvenOddValues(int arr[], int n) {
    cout << "Even values: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            cout << arr[i] << " ";
    }

    cout << "\nOdd values: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0)
            cout << arr[i] << " ";
    }
}

// Displays values located at even and odd indices
void displayEvenOddIndexValues(int arr[], int n) {
    cout << "Values at even index: ";
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            cout << arr[i] << " ";
    }

    cout << "\nValues at odd index: ";
    for (int i = 0; i < n; i++) {
        if (i % 2 != 0)
            cout << arr[i] << " ";
    }
}

// Counts and displays the total number of even and odd values
void countEvenOddValues(int arr[], int n) {
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    cout << "Even count = " << evenCount << endl;
    cout << "Odd count = " << oddCount;
}
