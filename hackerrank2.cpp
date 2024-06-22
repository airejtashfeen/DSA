#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b,c;
    cout<<"Enter the 3 numbers:";
    cin>>a>>b>>c;

    if(a&&b&&c <1 || a&&b&&c>1000){
    cout<<"Invalid number"<<endl;
    }
    else{
    int sum=0;
    sum=a+b+c;
    cout<<"\nThe sum is:"<<sum<<endl;
    }
    return 0;
}

