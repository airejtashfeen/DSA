#include <iostream>
#include <chrono>
using namespace std;

int main() {
    int n, data;
    cout << "Enter size of the array: ";
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "\nThe array you entered is:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Bubble sort
    auto startTime = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j + 1] < arr[j]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    auto endTime = chrono::steady_clock::now();

    cout << "\nThe array you entered in sorted order is:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    double timeInMilliseconds = chrono::duration<double, milli>(endTime - startTime).count();
    cout << "\nTime taken for bubble sort: " << timeInMilliseconds << " milliseconds";

    delete[] arr;
    return 0;
}
