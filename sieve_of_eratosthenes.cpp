#include <iostream>
#include <vector>

using namespace std;

void sieveOfEratosthenes(int n) {
    //Set all elements initially to true
    vector<bool> prime(n + 1, true);

    // Set the first two elements to false as 0 and 1 are not prime numbers
    prime[0] = prime[1] = false;

    for (int p = 2; p * p <= n; ++p) {
        if (prime[p]) {
            for (int i = p * p; i <= n; i += p) {
                prime[i] = false;
            }
        }
    }

    // Print all prime numbers
    for (int p = 2; p <= n; ++p) {
        if (prime[p]) {
            cout << p << endl;
        }
    }
}

int main() {
    int n = 30;
    cout << "Following are the prime numbers smaller "
         << "than or equal to " << n << endl;
    sieveOfEratosthenes(n);
    return 0;
}
