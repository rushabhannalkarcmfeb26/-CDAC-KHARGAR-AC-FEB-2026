#include <iostream>
using namespace std;

// Swap by Value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByValue: a=" << a << ", b=" << b << endl;
}

// Swap by Address 
void swapByAddress(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "Inside swapByAddress: *a=" << *a << ", *b=" << *b << endl;
}

// Swap by Reference
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByReference: a=" << a << ", b=" << b << endl;
}

int main() {
    int x = 10, y = 20;

    cout << "\n--- Initial Values ---\n";
    cout << "x=" << x << ", y=" << y << endl;

    // Swap by Value
    cout << "\n--- Swap by Value ---\n";
    swapByValue(x, y);
    cout << "After swapByValue (main): x=" << x << ", y=" << y << endl;

    //  Swap by Address
    cout << "\n--- Swap by Address ---\n";
    swapByAddress(&x, &y);
    cout << "After swapByAddress (main): x=" << x << ", y=" << y << endl;

    //  Swap by Reference
    cout << "\n--- Swap by Reference ---\n";
    swapByReference(x, y);
    cout << "After swapByReference (main): x=" << x << ", y=" << y << endl;

    return 0;
}
