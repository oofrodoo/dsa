/*
 Demonstrates pointer concepts in C++
Topics: Basic pointers, dereferencing, memory addresses
*/

#include <iostream>
using namespace std;

void modifyOriginalPointer(int** ptr) {
    // Allocate new memory and change where the original pointer points
    *ptr = new int(100);
}

int main() {
    // Basic pointer initialization
    int number = 5;
    int* numberPtr = &number;    // Points to number's address
    
    // Demonstrating memory addresses
    cout << "Value of number: " << number << "\n";
    cout << "Address of number: " << &number << "\n";
    cout << "Value in pointer: " << numberPtr << "\n";
    cout << "Value at pointer's address: " << *numberPtr << "\n\n"; // This is called dereferencing
    
    // Modifying value through pointer
    *numberPtr = 10;    // Changes 'number' indirectly
    cout << "Modified number: " << number << "\n\n";
    
    // Pointer arithmetic
    int array[3] = {1, 2, 3};
    int* arrayPtr = array;
    
    cout << "Array values using pointer:\n";
    for(int i = 0; i < 3; i++) {
        cout << "Element " << i << ": " << *arrayPtr << "\n";
        arrayPtr++;     // Move to next memory location
    }
    
    // Multiple pointers
    int** doublePtr = &numberPtr;    // Pointer to pointer
    cout << "Value through double pointer: " << **doublePtr << endl << endl;  // Shows 10
    // When you need to change where a pointer points from inside a function, you need a double pointer to do it.

    // Double pointer use example:


    // Single pointer example first
    int* numPtr = new int(5);
    cout << "Value at numPtr: " << *numPtr << endl;        // Shows 5
    
    // Now use double pointer to modify numPtr
    modifyOriginalPointer(&numPtr);
    cout << "New value at numPtr: " << *numPtr << endl;    // Shows 100
    
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
    delete numPtr;
    for(int i = 0; i < rows; i++) {
        delete[] gridArray[i];
    }
    delete[] gridArray;
    
    return 0;
}