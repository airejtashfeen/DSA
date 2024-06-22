#include <iostream>
using namespace std;
int factorial(int n){
if(n==0){
    return 1;
}
int sAns;
sAns=n*factorial(n-1);
return sAns;
}

int main(){
int x;
cout<<"What number's factorial do you want?";
cin>>x;

int result=factorial(x);

cout<<"The factorial is:"<<result<<endl;
}
