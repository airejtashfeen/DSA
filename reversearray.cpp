#include <iostream>
#include <vector>

using namespace std;

//Recursive function to reverse an array

void reverseArray(vector<int>&nums,int l, int r){
   if(l>=r) return;

   swap(nums[l], nums[r]);

   reverseArray(nums, l+1, r-1);

}
int main(){
   vector<int> nums;
   int number;

   cout << "Enter numbers (enter -1 to stop):" << endl;

   while(true){
    cin>>number;

    if(number==-1){
        break;
    }
    nums.push_back(number);
   }

   int l= 0; 
   int r= nums.size()-1;

   cout<<"\nRight now the array is:";

   for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

   cout<<"\n Reversal function being called ....:";

   reverseArray(nums, l, r);
   
   cout<<"\nThe array after reversal is:";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

}