#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
int partition(vector<int>&arr, int low, int high){
    int pivot= arr[low];
    int i= low+1;

    for(int j= low+1; j<= high; j++){
        if(arr[j]<= pivot){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[i-1]);
    return i-1;
}

public: 

void quickSort(vector<int>&arr, int low, int high){
    if(low<high){
        int pIndex= partition(arr, low, high);
        quickSort(arr, low, pIndex-1);
        quickSort(arr, pIndex+1, high);
    }
}

};

int main(){
    Solution sol;
    vector<int> arr = {10, 7, 8, 9, 1, 5};

    cout << "Original array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    sol.quickSort(arr, 0, arr.size()-1);

    cout << "Sorted array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

}