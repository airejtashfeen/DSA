#include <iostream>

using namespace std;

//Recursive function to sum of first N numbers

int sumOfN(int n){
    if(n<=0) return 0;

    return n+ sumOfN(n-1);
}
int main(){
    int n;
    cout<<"How many first number's sum do you need:";
    cin>>n;

    cout<<"The sum of first "<<n<<" digits is:"<<sumOfN(n)<<endl;

}