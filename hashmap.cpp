#include <iostream>
#include <map>

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
     map<int, int>  mpp;

    cout << "Precomputing hash values..." << endl;
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++ ;
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q; 

    cout << "Enter " << q << " queries:" << endl;
    while(q--){
        int number;
        cin >> number;

        cout << "Count of " << number << " is: " << mpp[number] << endl;
    }

    return 0;
}
