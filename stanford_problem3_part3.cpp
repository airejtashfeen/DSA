#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

class Solution {
private:
    int comparisonCount = 0;

    int medianOfThree(vector<int>& arr, int low, int high) {
        int mid = low + (high - low) / 2;
        int a = arr[low];
        int b = arr[mid];
        int c = arr[high];

        if ((a <= b && b <= c) || (c <= b && b <= a)) return mid;
        if ((b <= a && a <= c) || (c <= a && a <= b)) return low;
        return high;
    }

    int partition(vector<int>& arr, int low, int high) {
        int pivotIndex = medianOfThree(arr, low, high);
        swap(arr[low], arr[pivotIndex]); // Swap median with the first element
        int pivot = arr[low];
        int i = low + 1;

        for (int j = low + 1; j <= high; j++) {
            comparisonCount++; // Increment comparison count
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
