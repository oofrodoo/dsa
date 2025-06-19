/* Testing stuff
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
   
    char ch[10] = {'a','b','c','d','f','o','g'};
    string str = "abcdfog";
    cout<<"Raw array: [ch]"<<endl;
    for(auto i:ch){
        cout<<i<<endl;
    }
    cout<<endl;
    cout<<"Raw array: [ch] sorted with pointer arithmetic approach: "<<endl;
    sort(ch,ch+7);
    for(auto i:ch){
        cout<<i<<endl;
    }
    cout<<endl;
    // ch.push_back('p'); // doesn't work raw array bhayera 
 
    cout<<str.size()<<endl;
    str.push_back('p');
    cout<<"stl string array: string str: (with pushback)"<<endl;
    for(auto i:str){
        cout<<i<<endl;
    }
    cout<<endl;
    sort(str.begin(),str.end());
    cout<<"stl array: string str sorted with stl approach (str.begin(), str.end()): "<<endl;
    for(auto i:str){
        cout<<i<<endl;
    }
    cout<<str.size()<<endl;
    return 0;

    string str1 = "gilitch bhandari says hi";
    
    // Step 1: Sort the string
    sort(str1.begin(), str1.end());
    
    // Step 2: Remove duplicates using unique
    // unique() moves duplicates to end and returns iterator to new end
    // erase() removes everything from that position to actual end
    str1.erase(unique(str1.begin(), str1.end()), str1.end());
    
    cout << "String with unique characters: " << str1 << endl;
    
    // Print each character
    for (auto i : str1) {
        cout << i << endl;
    }
 }
 */

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool checkPalindrome(string str) {
    string cleanStr = ""; // whitespace and all hatayera store garne
    for(char c : str) {
        if(isalnum(c)) { // if alphanumeric cha bhane rakhne
            cleanStr += tolower(c); //sabai lowercase ma convert garne
        }
    }
    int start = 0; int end = cleanStr.length() - 1;
    while(start < end) {
        if(cleanStr[start] != cleanStr[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main() {
    string str = "c1 O$d@eeD! $ o 1c";
    string str2 = "race a car";
    string str3 = "racecar";
    if(checkPalindrome(str)) {
        cout <<endl<< "yes " << str<<" is palindrome!" << endl<<endl;
    } else {
        cout << "no "<< str<<" is not a palindrome!" << endl<<endl;
    }
    if(checkPalindrome(str2)) {
        cout << "yes " << str2<<" is palindrome!" << endl<<endl;
    } else {
        cout << "no "<< str2<<" is not a palindrome!" << endl<<endl;
    }
    if(checkPalindrome(str3)) {
        cout << "yes " << str3<<" is palindrome!" << endl<<endl;
    } else {
        cout << "no "<< str3<<" is not a palindrome!" << endl<<endl;
    }
    return 0;
    
}
 