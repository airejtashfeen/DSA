#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'fizzBuzz' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void fizzBuzz(int n) {


for(int i=1; i<=n;i++){

if(i%3==0 && i%5==0){
    cout<<"FizzBuzz"<<endl;
}
else if(i%3==0){
    cout<<"Fizz"<<endl;
}
else if(i%5==0){
    cout<<"Buzz"<<endl;
}
else{
    cout<<i<<endl;
}
}
}
int main()
{
    int num;
    cout<<"enter num:";
    cin>>num;
    cout<<endl;
    fizzBuzz(num);
}
