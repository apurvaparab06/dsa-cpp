/*
 * Program: Array Basics
 * ------------------------------------------
 * Demonstrates fundamental array operations:
 *   1. Take array elements as input from the user
 *   2. Display all elements of the array
 *   3. Calculate and display the sum of all elements
 *
 * Author: Apurva
 */

#include <iostream>
using namespace std;

// Function declarations
void inputArray(int arr[], int n);
void displayArray(int arr[], int n);
int sumOfArray(int arr[], int n);

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:\n";
    inputArray(arr, n);

    cout << "\nArray elements: ";
    displayArray(arr, n);

    int total = sumOfArray(arr, n);
    cout << "\n\nSum of array elements = " << total << endl;

    return 0;
}

// Takes n elements as input and stores them in the array
void inputArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

// Displays all elements of the array
void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

// Returns the sum of all elements in the array
int sumOfArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
