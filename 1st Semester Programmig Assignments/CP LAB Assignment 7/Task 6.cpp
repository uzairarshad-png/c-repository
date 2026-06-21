/*#include <iostream>
using namespace std;

// Function to calculate area of a circle
float area(float radius) {
    return (3.142 * radius * radius);
}

// Function to calculate area of a rectangle
float area(float length, float width) {
    return length * width;
}

// Function to calculate area of a triangle 
float area(int base, int height) {
    return (0.5 * base * height);
}

int main() {
    int choice, base, height;
    float radius, length, width;
    cout << "Geometry Calculator\n";
    cout << "1. Area of Circle\n";
    cout << "2. Area of Rectangle\n";
    cout << "3. Area of Triangle\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;
    switch(choice){
        case 1:
        cout << "Enter radius of the circle: ";
        cin >> radius;
        cout << "Area of Circle: " << area(radius) << endl;
        break;
        case 2: 
        cout << "Enter length and width of the rectangle: ";
        cin >> length >> width;
        cout << "Area of Rectangle: " << area(length, width) << endl;
        break;
        case 3:
        cout << "Enter the base & height of the triangle: ";
        cin >> base >> height;
        cout << "Area of Triangle: " << area(base, height) << endl;
        break;
        default:
        cout << "Invalid choice. Please select between 1 and 3." << endl;
    }

    return 0;
}*/