#include <iostream>
#include <cstdlib>   // for malloc and free
using namespace std;

int main() {
    
    int* arr = (int*) malloc(5 * sizeof(int));
    if(arr == NULL) {
        cout << " failed!\n";
        return 1;
    }
    cout << " Memory allocated using malloc";
    cout << "Enter 5 integers: ";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    
    cout << "You entered: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    //  Deallocate memory using free
    free(arr);
    cout << " Memory deallocated  using free.\n";

    return 0;
}
