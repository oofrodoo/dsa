#include <iostream>
using namespace std;
int main ()
{
    int num = 5;
    int* ptr = &num; // stores address
    // pointers: Store address!!!

    cout << &num<<endl;
    cout << ptr<<endl; // like i said, pointers store addy
    cout << *ptr<<endl;
    // dereferencing: shows value stored in that addy.
}