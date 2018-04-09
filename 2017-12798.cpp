#include <iostream>
#include <vector>

using namespace std;

void main() {
	int num, size;
	vector<int> array1;
	while (cin >> num) {
		array1.push_back(num);
	}
	cout << endl << "ordered array" << endl;
	size = array1.size();
	for (int j = size - 1; j >= 0; j--) {
		for (int i = j - 1; i >= 0; i--) {
			if (array1[i] < array1[j]) {
				int temp = array1[j];
				array1[j] = array1[i];
				array1[i] = temp;
			}
		}
	}
	for (auto i : array1) {
		cout << i << " ";
	}
	cout << endl;
}