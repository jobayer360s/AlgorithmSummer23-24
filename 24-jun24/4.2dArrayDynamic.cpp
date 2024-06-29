#include <iostream>
using namespace std;

// Function to allocate memory for a 2D array
int** create2DArray(int rows, int cols) {
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }
    return arr;
}

// Function to initialize the 2D array
void initialize2DArray(int** arr, int rows, int cols) {
    int c = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = ++c;
        }
    }
}

// Function to print the 2D array
void print2DArray(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m = 3, n = 4;

    // Create and initialize the 2D array
    int** a = create2DArray(m, n);
    initialize2DArray(a, m, n);

    // Print the 2D array
    print2DArray(a, m, n);

    // Clean up memory
    for (int i = 0; i < m; i++) {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}
