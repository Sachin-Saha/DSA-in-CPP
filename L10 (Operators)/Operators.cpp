#include <iostream>
using namespace std;

int main() {
    // Arithmetic Operators
    int a = 10, b = 5;
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;  // Modulus (remainder)

    // Relational Operators
    cout << "\nRelational Operators:" << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;

    // Logical Operators
    bool x = true, y = false;
    cout << "\nLogical Operators:" << endl;
    cout << "x && y: " << (x && y) << endl;  // AND
    cout << "x || y: " << (x || y) << endl;  // OR
    cout << "!x: " << (!x) << endl;          // NOT

    // Bitwise Operators
    cout << "\nBitwise Operators:" << endl;
    cout << "a & b: " << (a & b) << endl;  // AND
    cout << "a | b: " << (a | b) << endl;  // OR
    cout << "a ^ b: " << (a ^ b) << endl;  // XOR
    cout << "~a: " << (~a) << endl;        // NOT
    cout << "a << 1: " << (a << 1) << endl;  // Left Shift
    cout << "a >> 1: " << (a >> 1) << endl;  // Right Shift

    // Assignment Operators
    int c = 20;
    cout << "\nAssignment Operators:" << endl;
    c += 5;  // c = c + 5
    cout << "c += 5: " << c << endl;
    c -= 5;  // c = c - 5
    cout << "c -= 5: " << c << endl;
    c *= 2;  // c = c * 2
    cout << "c *= 2: " << c << endl;
    c /= 2;  // c = c / 2
    cout << "c /= 2: " << c << endl;

    // Increment and Decrement Operators
    cout << "\nIncrement and Decrement Operators:" << endl;
    cout << "a++: " << a++ << endl;  // Post-increment
    cout << "++a: " << ++a << endl;  // Pre-increment
    cout << "a--: " << a-- << endl;  // Post-decrement
    cout << "--a: " << --a << endl;  // Pre-decrement

    // Conditional (Ternary) Operator
    cout << "\nConditional (Ternary) Operator:" << endl;
    int result = (a > b) ? a : b;  // If a > b, result = a, else result = b
    cout << "a > b ? a : b = " << result << endl;

    // Comma Operator
    cout << "\nComma Operator:" << endl;
    int d = (a++, b++, a + b);  // a and b incremented, then sum is assigned to d
    cout << "d = (a++, b++, a + b): " << d << endl;

    return 0;
}
