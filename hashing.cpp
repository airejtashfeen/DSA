#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Precompute
    int hash[13] = {0}; // We have taken max to be 12

    cout << "Precomputing hash values..." << endl;
    for(int i = 0; i < n; i++){
        hash[arr[i]] += 1;
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q; 

    cout << "Enter " << q << " queries:" << endl;
    while(q--){
        int number;
        cin >> number;

        cout << "Count of " << number << " is: " << hash[number] << endl;
    }

    return 0;
}
