#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
unordered_map<string,int> hashMap;

hashMap["Airej"]= 20;
hashMap["Tazeen"]=17;
hashMap["Emaan"]= 18;
hashMap["Basit"]=19;

cout<<"Basit's age:"<<hashMap["Basit"]<<endl;

string searchKey="Airej";

if(hashMap.find(searchKey) != hashMap.end()){
    cout<<searchKey<<"'s age:"<<hashMap[searchKey]<<endl;
}
else{
    cout<<searchKey<< "not found in the hash map"<<endl;
}

}