#include <iostream>
using namespace std;

template<typename T>
void binarySearch(T arr[], int n, T key) {
    int s = 0;
    int e = n;
    int counter=0;

    while (s <= e) {
        cout<<"iteration"<<endl;
        cout<<"Value of high is"<< e<<endl;
        cout<<"Value of low is"<< s <<endl;
        int mid = (s + e) / 2;
        if (key == arr[mid]) {
            cout << "Key found at " << mid << " index" << endl;
            cout<<"It took "<< counter<<" iterations";
            return;
        } else if (key < arr[mid]) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    cout << "Key not present in the array!" << endl;
}

int main() {
    int n;
    int key;

    cout << "Enter the size of the array:";
    cin >> n;

    int* arr = new int[n];

    cout << "\nEnter " << n << " elements for your array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nYour array is:\n" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }

    cout << "\n\nEnter the key you want to find:";
    cin >> key;

    binarySearch<int>(arr, n, key);

    delete[] arr;
    cout << "\nMemory deallocated!" << endl;
    return 0;
}
