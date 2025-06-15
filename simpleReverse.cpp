#include <iostream>
#include <vector>
using namespace std; 
/* Simple Reverse Function
vector<int> reverse(vector<int> v) {
    size_t start = 0;
    size_t end = v.size() - 1;
    while (start <= end) {
        swap(v[start], v[end]);
        start++;
        end--;
    }
    return v;
}
void print(vector<int> v) {
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main (){
    vector<int> v;
    v = {1, 2, 3, 4, 5};
    v.push_back(6);
    vector<int> ans = reverse(v);
    cout << "Reversed vector: ";
    print(ans); 
    // Output: Reversed vector: 5 4 3 2 1

    v = {10, 20, 30, 40, 50};
    // Output: Reversed vector: 50 40 30 20 10

    ans = reverse(v);
    cout << "Reversed vector: ";
    print(ans);
    return 0;
    
}
*/

/*Reversing Arrays after a certain index*/

vector<int> reverse(vector<int> v, size_t index){
    size_t start = index + 1;
    size_t end = v.size() - 1;
    while (start <= end) {
        swap(v[start], v[end]);
        start++;
        end--;
    }
    return v;
}
void print(vector<int> v) {
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main (){
    vector<int> v;
    v = {1, 2, 3, 4, 5};
    v.push_back(6);
    size_t index = 2; // Reverse after index 2
    vector<int> ans = reverse(v, index);
    cout << "Reversed vector after index " << index << ": ";
    print(ans); 

    v = {10, 20, 30, 40, 50};
    index = 1; // Reverse after index 1
    ans = reverse(v, index);
    cout << "Reversed vector after index " << index << ": ";
    print(ans);

    return 0;
}