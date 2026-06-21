#include <iostream>
using namespace std;
struct Room {
    double length;
    double width;
};
void inputDimensions(Room& room) {
    cout << "Enter length of the room: ";
    cin >> room.length;

    cout << "Enter width of the room: ";
    cin >> room.width;
}
double calculateArea(const Room& room) {
    return room.length * room.width;
}
void displayArea(const Room& room) {
    cout << "\nThe area of the room is: "
        << calculateArea(room)
        << " square units." << endl;
}
int main() {
    Room room;

    inputDimensions(room);
    displayArea(room);

    return 0;
}
