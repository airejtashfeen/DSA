#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream> 

using namespace std;

class Solution {
private:
    int comparisonCount = 0;

    int partition(vector<int>& arr, int low, int high) {
        swap(arr[low], arr[high]);
        int pivot = arr[low];
        int i = low + 1;

        for (int j = low + 1; j <= high; j++) {
            comparisonCount++;  
            if (arr[j] <= pivot) {
                swap(arr[i], arr[j]);
                i++;
            }
        }
        swap(arr[low], arr[i - 1]);
        return i - 1;
    }

public:
    void quickSort(vector<int>& arr, int low, int high) {
        if (low < high) {
            int pIndex = partition(arr, low, high);
            quickSort(arr, low, pIndex - 1);
            quickSort(arr, pIndex + 1, high);
        }
    }

    int getComparisonCount() const {
        return comparisonCount;
    }
};

int main() {
    Solution sol;
    vector<int> arr;
    ifstream inputFile("quicksort.txt"); 

    if (!inputFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    int num;
    while (inputFile >> num) {
        arr.push_back(num); 
    }

    inputFile.close(); 

    sol.quickSort(arr, 0, arr.size() - 1);

    cout << "Total number of comparisons: " << sol.getComparisonCount() << endl;

    return 0;
}
