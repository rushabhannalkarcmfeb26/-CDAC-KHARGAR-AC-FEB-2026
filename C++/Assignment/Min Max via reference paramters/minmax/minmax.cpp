#include <iostream>
using namespace std;

// Function to find min and max without library functions or conditionals
void findMinMax(int a, int b, int c, int &minVal, int &maxVal) {
    

   
    int maxAB = (a + b + ((a - b) >= 0 ? (a - b) : (b - a))) / 2;
    
    maxVal = (maxAB + c + ((maxAB - c) >= 0 ? (maxAB - c) : (c - maxAB))) / 2;

    
    int minAB = (a + b - ((a - b) >= 0 ? (a - b) : (b - a))) / 2;
    
    minVal = (minAB + c - ((minAB - c) >= 0 ? (minAB - c) : (c - minAB))) / 2;
}

int main() {
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    int lo, hi;
    findMinMax(a, b, c, lo, hi);

    cout << "Minimum: " << lo << endl;
    cout << "Maximum: " << hi << endl;

    return 0;
}
