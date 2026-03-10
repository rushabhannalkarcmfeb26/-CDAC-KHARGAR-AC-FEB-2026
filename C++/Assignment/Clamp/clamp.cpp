#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	int clamp(int val, int lo, int hi);
	int val, lo, hi;

	cout << "Enter a value and the lower and upper bounds: ";
	cin >> val >> lo >> hi;

		return (val < lo) ? lo : (val > hi) ? hi : val;

}
