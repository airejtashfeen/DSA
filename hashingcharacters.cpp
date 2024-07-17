#include <iostream>

using namespace std;

int main(){
    string s;
    cout << "Enter the string: ";
    cin>>s;

    // Precompute
    int hash[256] = {0}; // We have taken max to be 256 since 256 characters

    cout << "Precomputing hash values..." << endl;
    for(int i = 0; i < s.size(); i++){
        hash[s[i]]++ ;
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q; 

    cout << "Enter " << q << " queries:" << endl;
    while(q--){
        char c;
        cin >> c;

        cout << "Count of " << c << " is: " << hash[c] << endl;
    }

    return 0;
}
