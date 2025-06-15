#include <iostream>
#include <vector>
using namespace std;
void merge(int arr1[], int m, int arr2[], int n, int arr3[]) {
    int i = 0, j = 0, k = 0;
    // Merging two sorted arrays into arr3
    while (i< m && j < n) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }
    // If there are remaining elements in arr1
    while (i < m) {
        arr3[k++] = arr1[i++];
    }
    // If there are remaining elements in arr2
    while (j < n) {
        arr3[k++] = arr2[j++];
    }
}

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr1[5] = {1, 3,5, 7, 9};
    int arr2[3] = {2, 4, 6};
    int arr3[8];
    merge(arr1, 5, arr2, 3, arr3);
    print(arr3, 8);
    return 0;
}