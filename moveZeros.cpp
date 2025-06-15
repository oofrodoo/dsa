#include <iostream>
#include <vector>
using namespace std;
vector<int> moveZeros(vector<int>& nums) {
    int nonZero  = 0;
    for (size_t i = 0; i < nums.size(); i++)
    {
        if(nums[i]!=0){
            swap(nums[nonZero], nums[i]);
            nonZero++;
        }
    }
    return nums;
}

void print (vector<int>& nums){
    for (size_t i = 0; i < nums.size(); i++)    
    {
        cout<<nums[i]<<" ";
    }
    
}

int main(){
    vector<int> nums = {0, 1, 0, 3, 12};
    vector<int>ans = moveZeros(nums);
    print(ans);
    return 0;

}