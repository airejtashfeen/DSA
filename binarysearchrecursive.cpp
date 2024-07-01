#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        return binarySearch(nums, 0, nums.size()-1, target);
    }
private: 
    int binarySearch(vector<int>&nums, int low, int high, int target){
        if(low>high) return -1;
        int mid= (low+high)/2;
        if(nums[mid]==target) {
        return mid;
        }
        else if(nums[mid]< target){
        return binarySearch(nums,mid+1, high, target);
        }
        else{
        return binarySearch(nums, low, mid-1, target);
        }
    }
};


int main() {
    vector<int> nums = {1, 3, 5, 7, 9, 11, 13, 15, 17};
    int target = 7;

    Solution solution;
    int result = solution.search(nums, target);

    if (result != -1) {
        cout << "Target " << target << " found at index " << result << endl;
    } else {
        cout << "Target " << target << " not found in the array." << endl;
    }

    return 0;
}
