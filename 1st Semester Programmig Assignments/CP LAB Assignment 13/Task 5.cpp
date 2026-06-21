#include <iostream>
using namespace std;

void findTallest(int* heights, int size, int& tallestHeight, int& index) {
    tallestHeight = *heights;
    index = 0;

    for (int i = 1; i < size; i++) {
        if (*(heights + i) > tallestHeight) {
            tallestHeight = *(heights + i);
            index = i;
        }
    }
}

int main() {
    int heights[] = { 165, 172, 180, 168 };
    int size = 4;
    int tallest, position;
    cout << "Height of Each Person:" << endl;
	cout << "Person Index "<< "\t\Height:" << endl;
    for (int i = 0; i < size; i++) {
        cout <<i <<"\t\t"<< heights[i] << endl;
    }
    findTallest(heights, size, tallest, position);

    cout << "Tallest Height: " << tallest << endl;
    cout << "Person Index: " << position << endl;

    return 0;
}
