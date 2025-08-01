#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].first = v[i].first % k;
        if (v[i].first == 0) {
            v[i].first = k;  // Correct assignment here
        }
        v[i].second = i + 1;
    }

    // Sort by first (remainder) in descending order, then by second (index) in ascending order
    sort(v.begin(), v.end(), [](pair<int, int>& a, pair<int, int>& b) {
        if (a.first != b.first)
            return a.first > b.first;
        return a.second < b.second;
    });

    for (int i = 0; i < n; i++) {
        cout << v[i].second << " ";
    }
    cout << endl;
}
// if we sort pair then it sort first on basis of first ele, then for tie break it 
// uses ele from second ele.
//vector<pair<int, int>> v = {{3, 4}, {2, 5}, {3, 2}, {1, 7}};
//sort(v.begin(), v.end());

//{1, 7}, {2, 5}, {3, 2}, {3, 4} like o/p will be
// we have to use custom compartator here to sort first ele of pair in des, then 
//2nd in asc order 

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
