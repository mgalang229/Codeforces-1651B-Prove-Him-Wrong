#include <bits/stdc++.h>
using namespace std;

int get_total(vector<int> arr) {
	int total = 0;
	for(int i = 0; i < (int) arr.size(); i++) {
		total += arr[i];
	}
	return total;
}

int main() {
	int n = 4;
	int total = 0;
	vector<int> arr(n, 0);
	cout << "Sequence:\n";
	for(int i = 0; i < n; i++) {
		arr[i] = pow(3, i);
		cout << arr[i] << " ";
		total += arr[i];
	}
	cout << "\nTotal: " << total << "\n";
	vector<int> copy_arr(n);
	for(int i = 0; i < n; i++) {
		copy_arr[i] = arr[i];
	}
	bool checker = true;
	for(int i = 0; i < n; i++) {
		bool not_decreased = true;
		for(int j = i + 1; j < n; j++) {
			int diff = abs(arr[i] - arr[j]);
			arr[i] = arr[j] = diff;
			for(auto& x : arr) {
				cout << x << " ";
			}
			cout << "\n";
			not_decreased &= (get_total(arr) >= total);
			arr = copy_arr;
			if(!not_decreased) {
				checker = false;
				break;
			}
		}
		if(!checker) {
			break;
		}
	}
	cout << (checker ? "Good" : "Bad") << "\n";
}
