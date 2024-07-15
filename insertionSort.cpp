
#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int> &arr){
    int n= arr.size();

    for(int i= 1; i< n; i++){
     int j= i-1;
     int key= arr[i];
     while(j>=0 && arr[j]>key){
       arr[j+1]= arr[j];
       j--;
    }
    arr[j+1]= key;
    }
}
int main() {
    std::vector<int> arr;
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(6);
    
    insertionSort(arr);
    
    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}