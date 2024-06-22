#include <iostream>
using namespace std;

bool isSorted(int arr[], int Size){
    if (Size <= 1) {
        return true; // Base case: an array with 0 or 1 element is considered sorted
    }
    if (arr[0] > arr[1]) {
        return false;  // Base case: out-of-order elements found
    }
    return isSorted(arr+1, Size-1);  // Recursive case: check rest of the array
}


int main(){
    int Size, data;
    int* arr;
    cout << "What size array do you want: ";
    cin >> Size;

    arr = new int[Size];

    cout << "\nENTERING ELEMENTS IN THE ARRAY" << endl;
    for(int i = 0; i < Size; i++){
        cout << "\nEnter data for " << i << " element: ";
        cin >> data;
        arr[i] = data;
    }

    cout << "\nYOUR ARRAY IS: ";
    for(int i = 0; i < Size; i++){
        cout << arr[i] << "\t";
    }

    cout << "\nChecking if array is sorted: " << boolalpha << isSorted(arr, Size);
    delete[] arr;
    cout << endl;
    return 0;
}
