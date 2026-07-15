#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 25, 30, 45, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter element to search: ";
    cin >> target;

    int index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }

    if (index != -1)
        cout << "Element " << target << " found at index " << index << endl;
    else
        cout << "Element " << target << " not found in the array" << endl;

    cout << "Index of element (using find logic): " << index << endl;

    return 0;
}
