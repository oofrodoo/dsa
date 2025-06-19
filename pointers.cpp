#include <iostream>
using namespace std;

void modifyOriginalPointer(int** ptr) {
    // Allocate new memory and change where the original pointer points
    *ptr = new int(100);
}

int main() {
    // Basic pointer declaration and initialization
    int num = 5;
    int* ptr = &num;     // ptr stores address of num
    
    // Different ways to use pointers
    cout << "Address of num: " << &num << endl;    // Direct address
    cout << "Value in ptr: " << ptr << endl;       // Same address but accessing thru pointer
    cout << "Value at ptr: " << *ptr << endl;      // Dereferencing (shows 5). Dereferencing helps to acces value stored in that pointer.
    
    // Modifying value through pointer
    *ptr = 10;    // Changes num to 10
    cout << "New value of num: " << num << endl;  // Now changes the value of num.
    
    // Multiple pointers
    int** doublePtr = &ptr;    // Pointer to pointer
    cout << "Value through double pointer: " << **doublePtr << endl << endl;  // Shows 10
    // When you need to change where a pointer points from inside a function, you need a double pointer to do it.

    // Double pointer use example:
    // Single pointer example first
    int* numberPtr = new int(5);
    cout << "Value at numberPtr: " << *numberPtr << endl;        // Shows 5
    
    // Now use double pointer to modify numberPtr
    modifyOriginalPointer(&numberPtr);
    cout << "New value at numberPtr: " << *numberPtr << endl;    // Shows 100
    
    // 2D dynamic array example
    int rows = 2, cols = 3;
    int** gridArray = new int*[rows];    // Array of pointers
    
    // Initialize each row
    for(int i = 0; i < rows; i++) {
        gridArray[i] = new int[cols];    // Each pointer points to an array
        for(int j = 0; j < cols; j++) {
            gridArray[i][j] = i + j;     // Fill with values
        }
    }
    
    // Print matrix
    cout << "\n2D Array using double pointer:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << gridArray[i][j] << " ";
        }
        cout << endl;
    }
    
    // Clean up memory
    delete numberPtr;
    for(int i = 0; i < rows; i++) {
        delete[] gridArray[i];
    }
    delete[] gridArray;
    
    return 0;
}