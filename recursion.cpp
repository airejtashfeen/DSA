#include <iostream>

//Function to print name N times

using namespace std;

void fun(int i, int n){
    if(i>n) return;

    cout<<"Airej"<<endl;

    fun(i+1, n);
}
int main(){
    int n;
    cout<<"How many times do you wanna print your name:";
    cin>>n;
    fun(1,n);

}