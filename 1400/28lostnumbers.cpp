#include <bits/stdc++.h>

using namespace std;

int query(int i, int j) {
		// Interactive query: convert 0-based indices to 1-based and flush with endl
		cout << "? " << i + 1 << ' ' << j + 1 << endl;
		int ans;
		cin >> ans; // Reads a[i] * a[j] from the judge (or from input in hacked version)
		return ans;
}

int common(pair<int, int> a, pair<int, int> b) {
		// Returns the common element between two pairs (they are known to share exactly one)
		if (a.first == b.first || a.first == b.second) return a.first;
		else return a.second;
}

int other(pair<int, int> p, int a) {
		// Given a pair and one of its values, returns the other value
		if (p.first == a) return p.second;
		else return p.first;
}

void solve() {
		vector<int> arr = {4, 8, 15, 16, 23, 42};
		int n = arr.size();

		// Precompute all pairwise products -> (value1, value2) mapping for quick reverse lookup
		map<int, pair<int, int>> m;
		for (int i = 0; i < n; i++) {
				for (int j = i + 1; j < n; j++) {
						m[arr[i] * arr[j]] = {arr[i], arr[j]};
				}
		}

		vector<int> ans(6);

		// Query products of adjacent positions (1,2) and (2,3)
		auto p1 = m[query(0, 1)];
		auto p2 = m[query(1, 2)];
		// The shared number between these two products is a[2] (0-based index 1)
		ans[1] = common(p1, p2);
		ans[0] = other(p1, ans[1]); // From product of (a[0], a[1])
		ans[2] = other(p2, ans[1]); // From product of (a[1], a[2])

		// Repeat the same logic for positions (4,5) and (5,6)
		p1 = m[query(3, 4)];
		p2 = m[query(4, 5)];
		ans[4] = common(p1, p2); // This is a[5] (0-based index 4)
		ans[3] = other(p1, ans[4]);
		ans[5] = other(p2, ans[4]);

		// Output the final permutation and flush
		cout << "! ";
		for (auto x : ans) {
				cout << x << ' ';
		}
		cout << endl;
}

int main() {
		solve();
}

