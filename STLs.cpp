#include <iostream>
//#include <bits/stdc++.h> // This is not recommended in competitive programming. It includes all the standard libraries and increases the compilation time.
#include <algorithm>  // for binary_search
#include <vector>    // for vector
using namespace std;
int main ()
{
    // Sets and Unordered Sets and Maps and Unordered Maps.
    
    /* // Set store unique elements only. If you put number 5 like 5 times, It'll only store one '5'. Elements are returned in sorted order. Wheres, unordered sets are faster than ordered sets.
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(4);
    s.insert(5);
    s.insert(5);
    s.insert(5);

    set<int>::iterator it = s.begin();
    it++; // This will point to the second element of the set.
    s.erase(it); // This will erase the second element of the set.

    // s.erase(s.begin()); // This is not possible in set. You can't erase elements by index in set. You can only erase elements by value.

    s.erase(s.begin()); // This will erase the first element of the set.

    s.erase(5); // This will erase all the 5s from the set.


    for(auto i:s)
    {
        cout<<i<<endl;
    }

    

    unordered_set<int> us;
    us.insert(5);
    us.insert(1);
    us.insert(3);
    us.insert(2);
    us.insert(4);
    us.insert(5);
    us.insert(5);
    
    cout<<endl;
    for(auto i:us)
    {
        cout<<i<<endl;
    }
    */

    /* // Map is a key value pair. It stores unique keys only. If you put the same key twice, It'll only store the last value of the key. Elements are returned in sorted order. Wheres, unordered maps are faster than ordered maps.*/
    /* 
    map<int, int> m;
    m[5] = 100;
    m[1] = 100;
    m[2] = -1;
    m[3] = 200;
    m[100000] = 1; 
    m[100000] = 2; // This will overwrite the previous value of the key 100000.
    for (auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
        */

    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);

    sort(v.begin(), v.end()); // Sorting the vector in ascending order.
    cout << "Finding 5 -> "<<binary_search(v.begin(), v.end(), 5) << endl; // This will return 0 because 5 is not present in the vector.
    cout<< "Finding 3 -> " << binary_search(v.begin(), v.end(), 3) << endl; // This will return 1 because 3 is present in the vector.

    // lower_bound and upper_bound
    auto it = lower_bound(v.begin(), v.end(), 6); // This will return the first element which is greater than or equal to 6.
    cout << "Lower bound of 6 is at index: " << it - v.begin() << endl; // This will return the index of the first element which is greater than or equal to 6.
    it = upper_bound(v.begin(), v.end(), 6); // This will return the first element which is greater than 6.
    cout << "Upper bound of 6 is at index: " << it - v.begin() << endl; // This will return the index of the first element which is greater than 6.


    // Reverse string
    string str = "Hello World";
    reverse(str.begin(), str.end()); // This will reverse the string.
    cout << "Reversed string: " << str << endl; // This will print the reversed string.
    // Rotate the vector
    rotate(v.begin(), v.begin()+1, v.end());
    cout << "Rotated vector: ";
    for (auto i : v) {
        cout << i << " "; // This will print the rotated vector.
    }
    /* 
    vector<int> vec = {1, 2, 3, 4, 5};
    rotate(vec.begin(), vec.begin() + 2, vec.end()); // This will rotate the vector by 2 positions.
    cout << "Rotated vector: ";
    for (auto i : vec) {
        cout << i << " "; // This will print the rotated vector.
    }
    cout << endl;
    // Shuffle the vector
    random_shuffle(vec.begin(), vec.end()); // This will shuffle the vector.
    cout << "Shuffled vector: ";
    for (auto i : vec) {
        cout << i << " "; // This will print the shuffled vector.
    }
    */
    return 0;

}
