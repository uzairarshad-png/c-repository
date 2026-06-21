//#include <iostream>
//using namespace std;
//
//void sortBooks(int* heights, int size) {
//    for (int i = 0; i < size - 1; i++) {
//        for (int j = i + 1; j < size; j++) {
//            if (*(heights + i) > *(heights + j)) {
//                int temp = *(heights + i);
//                *(heights + i) = *(heights + j);
//                *(heights + j) = temp;
//            }
//        }
//    }
//}
//
//int main() {
//    int bookHeights[] = { 25, 18, 30, 22 };
//    int size = 4;
//	cout << "Original Book Heights: " << endl;
//    cout << "Sorted Book Heights: ";
//    for (int i = 0; i < size; i++) {
//        cout << bookHeights[i] << " ";
//    }
//    sortBooks(bookHeights, size);
//
//    cout << "\nSorted Book Heights: ";
//    for (int i = 0; i < size; i++) {
//        cout << bookHeights[i] << " ";
//    }
//
//    return 0;
//}
