#include <iostream>
#include <vector>

using namespace std;

int func(int n, vector<int> &dp){

    if(n<=1) return n;

    if(dp[n]!=-1){
        return dp[n];
    }

    return dp[n]= func(n-1, dp) + func(n-2, dp);

}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

   vector<int> dp(n+1, -1);

    cout << "Fibonacci number at position " << n << " is: " << func(n, dp) << endl;

    return 0;
}