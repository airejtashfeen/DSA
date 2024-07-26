#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void maxHeapExample(vector<int>& numbers) {

    //DEFAULT BEHAVIOUR HENCE NO MODIFICATIONS REQUIRED
    priority_queue<int> maxHeap;

    for (int num : numbers) {
        maxHeap.push(num);
    }

    cout << "Max-Heap elements: ";
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
    cout << endl;
}

int main() {
    vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    maxHeapExample(numbers);

    return 0;
}
