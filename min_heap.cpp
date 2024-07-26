#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void minHeapExample(vector<int>& numbers) {
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int num : numbers) {
        minHeap.push(num);
    }

    cout << "Min-Heap elements: ";
    while (!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    cout << endl;
}

int main() {
    vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    minHeapExample(numbers);

    return 0;
}
