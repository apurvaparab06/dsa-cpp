/*
 * Program: Number Series using While Loops
 * ------------------------------------------
 * Demonstrates basic while-loop patterns:
 *   1. Print natural numbers from 1 to n
 *   2. Print natural numbers from n to 1 (reverse)
 *   3. Print even numbers from 1 to 100
 *   4. Print odd numbers from 1 to 100
 *
 * Author: Apurva
 */

#include <iostream>
using namespace std;

// Function declarations
void printNaturalNumbers(int n);
void printReverseNumbers(int n);
void printEvenNumbers(int limit);
void printOddNumbers(int limit);

int main() {
    int n;

    cout << "Enter n: ";
    cin >> n;

    cout << "\nNatural numbers from 1 to " << n << ":\n";
    printNaturalNumbers(n);

    cout << "\n\nNatural numbers from " << n << " to 1:\n";
    printReverseNumbers(n);

    cout << "\n\nEven numbers from 1 to 100:\n";
    printEvenNumbers(100);

    cout << "\n\nOdd numbers from 1 to 100:\n";
    printOddNumbers(100);

    cout << endl;
    return 0;
}

// Prints natural numbers from 1 up to n
void printNaturalNumbers(int n) {
    int i = 1;
    while (i <= n) {
        cout << i << " ";
        i++;
    }
}

// Prints natural numbers from n down to 1
void printReverseNumbers(int n) {
    while (n >= 1) {
        cout << n << " ";
        n--;
    }
}

// Prints all even numbers up to the given limit
void printEvenNumbers(int limit) {
    int i = 2;
    while (i <= limit) {
        cout << i << " ";
        i += 2;
    }
}

// Prints all odd numbers up to the given limit
void printOddNumbers(int limit) {
    int i = 1;
    while (i <= limit) {
        cout << i << " ";
        i += 2;
    }
}
