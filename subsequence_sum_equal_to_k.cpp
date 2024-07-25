#include <iostream>
#include <vector>

using namespace std;

void printSubsequence(int index, vector<int>& ds, int s, int sum, vector<int>& nums, int n) {
    if (index == n) {
        if (s == sum) {
            for (size_t i = 0; i < ds.size(); ++i) {
                cout << ds[i] << " ";
            }
            cout << endl;
        }
        return;
    }

    // Pick the current element
    ds.push_back(nums[index]);
    s += nums[index];
    printSubsequence(index + 1, ds, s, sum, nums, n);

    // Backtrack: remove the last added element and adjust the sum
    s -= nums[index];
    ds.pop_back();

    // Do not pick the current element
    printSubsequence(index + 1, ds, s, sum, nums, n);
}

int main() {
    vector<int> nums;
    nums.push_back(1); 
    nums.push_back(2); 
    nums.push_back(1); 
    int n = nums.size(); 
    int sum = 2; 

    vector<int> ds; 
    printSubsequence(0, ds, 0, sum, nums, n); 
    return 0;
}
