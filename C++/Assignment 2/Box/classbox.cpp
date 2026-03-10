#include <iostream>
using namespace std;

class Box {
private:
    int length, width, height;

public:
    
    Box(int l = 0, int w = 0, int h = 0) {
        if(l < 0 || w < 0 || h < 0) {
            cout << " Invalid dimensions! Setting to 0.\n";
            length = width = height = 0;
        } else {
            length = l;
            width = w;
            height = h;
        }
    }

  
    void setDimensions(int length, int width, int height) {
        if(length < 0 || width < 0 || height < 0) {
            cout << "Invalid dimensions! Values must be non-negative.\n";
            return;
        }
        this->length = length;
        this->width = width;
        this->height = height;
    }

  
    int volume() {
        return length * width * height;
    }

   
    void display() {
        cout << "\n--- Box Details ---\n";
        cout << "Length : " << length << endl;
        cout << "Width  : " << width << endl;
        cout << "Height : " << height << endl;
        cout << "Volume : " << volume() << endl;
    }
};

int main() {
    Box box;  
    int choice;

    do {
        cout << "---- Box Menu ---\n";
        cout << "1. Initialize using Constructor\n";
        cout << "2. Set Dimensions using setDimensions()\n";
        cout << "3. Display Box Details\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
        case 1: {
            int l, w, h;
            cout << "Enter length, width, height: ";
            cin >> l >> w >> h;
            box = Box(l, w, h);  
            cout << "Box initialized using constructor.\n";
            break;
        }
        case 2: {
            int l, w, h;
            cout << "Enter length, width, height: ";
            cin >> l >> w >> h;
            box.setDimensions(l, w, h);  // setter assignment
            cout << " Dimensions set successfully.\n";
            break;
        }
        case 3:
            box.display();
            break;
        case 4:
            cout << " Exiting program...\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while(choice != 4);

    return 0;
}
