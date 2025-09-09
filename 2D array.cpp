#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int arr[rows][cols];

    // Input 2D array
    cout << "Enter elements of the array:\n";
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            cin >> arr[i][j];

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Minimum of entire array\n";
        cout << "2. Maximum of each row\n";
        cout << "3. Minimum of each row\n";
        cout << "4. Row-wise sum\n";
        cout << "5. Column-wise sum\n";
        cout << "6. Maximum of each column\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                int minVal = arr[0][0];
                for(int i = 0; i < rows; i++)
                    for(int j = 0; j < cols; j++)
                        if(arr[i][j] < minVal)
                            minVal = arr[i][j];
                cout << "Minimum of entire array: " << minVal << endl;
                break;
            }

            case 2: {
                cout << "Maximum of each row:\n";
                for(int i = 0; i < rows; i++) {
                    int maxRow = arr[i][0];
                    for(int j = 1; j < cols; j++)
                        if(arr[i][j] > maxRow)
                            maxRow = arr[i][j];
                    cout << "Row " << i+1 << ": " << maxRow << endl;
                }
                break;
            }

            case 3: {
                cout << "Minimum of each row:\n";
                for(int i = 0; i < rows; i++) {
                    int minRow = arr[i][0];
                    for(int j = 1; j < cols; j++)
                        if(arr[i][j] < minRow)
                            minRow = arr[i][j];
                    cout << "Row " << i+1 << ": " << minRow << endl;
                }
                break;
            }

            case 4: {
                cout << "Row-wise sum:\n";
                for(int i = 0; i < rows; i++) {
                    int sumRow = 0;
                    for(int j = 0; j < cols; j++)
                        sumRow += arr[i][j];
                    cout << "Row " << i+1 << ": " << sumRow << endl;
                }
                break;
            }

            case 5: {
                cout << "Column-wise sum:\n";
                for(int j = 0; j < cols; j++) {
                    int sumCol = 0;
                    for(int i = 0; i < rows; i++)
                        sumCol += arr[i][j];
                    cout << "Column " << j+1 << ": " << sumCol << endl;
                }
                break;
            }

            case 6: {
                cout << "Maximum of each column:\n";
                for(int j = 0; j < cols; j++) {
                    int maxCol = arr[0][j];
                    for(int i = 1; i < rows; i++)
                        if(arr[i][j] > maxCol)
                            maxCol = arr[i][j];
                    cout << "Column " << j+1 << ": " << maxCol << endl;
                }
                break;
            }

            case 0:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while(choice != 0);

    return 0;
}

