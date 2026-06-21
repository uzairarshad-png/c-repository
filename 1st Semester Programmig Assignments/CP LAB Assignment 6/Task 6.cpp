#include <iostream>
#include <cmath>     // for sin(), cos(), acos()
#include <iomanip>   // for setprecision()
using namespace std;

// Portable PI
const double PI = acos(-1.0);

// Function to calculate the x-coordinate
double getX(double radius, double angle) {
    return radius * cos(angle);
}

// Function to calculate the y-coordinate
double getY(double radius, double angle) {
    return radius * sin(angle);
}

// Function to display all the points
void displayPoints(double radius, int numPoints) {
    cout << "\nCoordinates of points along the circumference of the circle:\n";
    cout << fixed << setprecision(5);

    for (int i = 0; i < numPoints; i++) {
        double angle = 2.0 * PI * i / numPoints;  // angle for each point
        double x = getX(radius, angle);
        double y = getY(radius, angle);

        cout << "Point " << i + 1 << ": (" << x << ", " << y << ")\n";
    }
}

int main() {
    double radius;
    int numPoints;

    cout << "Enter the radius of the circle: ";
    if (!(cin >> radius)) {
        cerr << "Invalid radius input.\n";
        return 1;
    }

    cout << "Enter the number of points on the circle: ";
    if (!(cin >> numPoints) || numPoints <= 0) {
        cerr << "Invalid number of points.\n";
        return 1;
    }

    displayPoints(radius, numPoints);
    return 0;
}
