/*#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter rows: ";
    cin >> row;
    cout << "Enter columns: ";
    cin >> col;

    int pxlgrid[100][100];
    int flattenedpxls[10000];
    int flatindx = 0;

    cout << "Enter image values:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) 
        {
            cin >> pxlgrid[i][j];
        }
    }

    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            flattenedpxls[flatindx] = pxlgrid[i][j];
            flatindx++;
        }
    }

    cout << "Linearized image data:\n";
    for (int i = 0; i < flatindx; i++) 
    {
        cout << flattenedpxls[i] << " ";
    }
    system("pause");
    return 0;
}*/