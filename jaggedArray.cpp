#include <iostream>

using namespace std;

int main() {
    int num_rows;

    // Get the number of rows from the user
    cout << "Enter the number of rows: ";
    cin >> num_rows;

    // Create a dynamic array of pointers to int (to represent the rows)
    int** jagged_array = new int*[num_rows];

    // Now, for each row, ask the user to input the number of elements and create the row
    for (int i = 0; i < num_rows; ++i) {
        int num_elements;
        cout << "Enter the number of elements for row " << i << ": ";
        cin >> num_elements;

        // Allocate memory for the current row
        jagged_array[i] = new int[num_elements];

        // Input the elements for the current row
        cout << "Enter " << num_elements << " elements for row " << i << ": ";
        for (int j = 0; j < num_elements; ++j) {
            cin >> jagged_array[i][j];
        }
    }

    // Display the elements of the jagged array
    cout << "The jagged array elements are:\n";
    for (int i = 0; i < num_rows; ++i) {
        int num_elements;
        cout << "Row " << i << ": ";
        for (int j = 0; j < num_elements; ++j) {
            cout << jagged_array[i][j] << " ";
        }
        cout << endl;
    }

    // Don't forget to free the memory for each row and the array of pointers
    for (int i = 0; i < num_rows; ++i) {
        delete[] jagged_array[i];
    }
    delete[] jagged_array;

    return 0;
}
