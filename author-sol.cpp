#include <bits/stdc++.h>
using namespace std;

void test_case() {
	int n;
	cin >> n;
	if(n > 19) {
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
	long long x = 1;
	for(int i = 0; i < n; i++) {
		cout << x << " ";
		x *= 3;
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	for(int tc = 1; tc <= T; tc++) {
		test_case();
	}
}
