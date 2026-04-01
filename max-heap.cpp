#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> maxHeap;

    // Insert elements
    maxHeap.push(10);
    maxHeap.push(30);
    maxHeap.push(20);
    maxHeap.push(5);

    // Display max element
    cout << "Top element: " << maxHeap.top() << endl;

    // Remove elements
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }

    return 0;
}