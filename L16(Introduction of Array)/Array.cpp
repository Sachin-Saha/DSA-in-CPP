#include <iostream>
using namespace std;

int main() {
    // 1. Declaring and initializing an array
    int arr[5] = {1, 2, 3, 4, 5};  // Array with 5 integers
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";  // Printing each element of the array
    }
    cout << endl;

    // 2. Accessing array elements
    cout << "Element at index 0: " << arr[0] << endl; // First element
    cout << "Element at index 3: " << arr[3] << endl; // Fourth element

    // 3. Changing array elements
    arr[2] = 10;  // Change the value at index 2
    cout << "Array after changing the value at index 2: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";  // Print the updated array
    }
    cout << endl;

    // 4. Taking input from user and storing in an array
    int userArr[3];  // Declare an array of 3 integers
    cout << "Enter 3 numbers: ";
    for (int i = 0; i < 3; i++) {
        cin >> userArr[i];  // Store user input in the array
    }

    // 5. Displaying user input array
    cout << "You entered: ";
    for (int i = 0; i < 3; i++) {
        cout << userArr[i] << " ";  // Display the elements entered by the user
    }
    cout << endl;

    return 0;
}
