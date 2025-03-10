//Christian Ziobro
#include <iostream>
#include <vector>
using namespace std;

class MaxHeap {
private:
	vector<int> heap;
	void heapifyUp(int index) {

	}

public:
	void insert(int value) {
		heap.push_back(value);
		heapifyUp(heap.size() - 1);
	}
	int getMax() {
		if (heap.empty()) {
			return -1;
		}
		else {
			return heap[0];
		}
	}
};
