#include <iostream>

using namespace std;

class Box {
private:
    double l;
    double b;
    double h;

public:
    // 1. Default Constructor (no parameters)
    Box() {
        l = 1.0;
        b = 1.0;
        h = 1.0;
    }

    // 2 & 3. Parameterized Constructor with Default Parameter
    // - Parameterized: when 3 arguments are passed
    // - Default Parameterized: when 'hei' is omitted, it defaults to 10.0
    Box(double len, double bre, double hei = 10.0) {
        l = len;
        b = bre;
        h = hei;
    }

    // 4. Copy Constructor (copies values from an existing object)
    Box(const Box &obj) {
        l = obj.l;
        b = obj.b;
        h = obj.h;
    }

    // Helper function to calculate volume
    double getVolume() {
        return l * b * h;
    }

    // Helper function to display box details
    void display() {
        cout << "Dimensions: " << l << " x " << b << " x " << h 
             << " | Volume: " << getVolume() << endl;
    }
};

int main() {
    // 1. Calls Default Constructor
    Box box1;
    cout << "Box 1 (Default): ";
    box1.display();

    // 2. Calls Parameterized Constructor (passes all 3 values)
    Box box2(5.0, 4.0, 3.0);
    cout << "Box 2 (Parameterized): ";
    box2.display();

    // 3. Calls Default Parameterized Constructor (passes 2 values, height defaults to 10.0)
    Box box3(5.0, 4.0);
    cout << "Box 3 (Default Parameterized): ";
    box3.display();

    // 4. Calls Copy Constructor (copies box2 into box4)
    Box box4(box2);
    cout << "Box 4 (Copy of Box 2): ";
    box4.display();

    return 0;
}
