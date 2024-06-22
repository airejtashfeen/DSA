#include <iostream>
using namespace std;
int countNumbers(int n){
if(n==0){
    return 0;
}
int sAns;
sAns= countNumbers(n/10);
sAns++;
return sAns;
}
int main(){
cout<<countNumbers(84610);

}
