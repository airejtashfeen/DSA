#include <iostream>
using namespace std;

int oddSum(int n){
    if(n==0){
        return 0;
    }
    int sum=0;
    sum= (2*n)-1;
    return sum + oddSum(n-1);
}
int main(){
int n;
cout<<"How many number's odd sum do you need?";
cin>> n;
cout<< oddSum(n);
}
