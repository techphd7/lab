#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int arr[100][100]; // assuming max size of 100x100
    cout << "Enter elements of the 2D array:" << endl;

    // Input the array
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> arr[i][j];
        }
    }

    // Find minimum
    int minVal = arr[0][0]; // initialize with the first element
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] < minVal) {
                minVal = arr[i][j];
            }
        }
    }

    cout << "Minimum element in the 2D array is: " << minVal << endl;

    return 0;
}

