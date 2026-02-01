#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
#include<map>
#define ll long long
#define nline '\n'
int mod=1e9+7;
const int max_color=100000;


ll calSum(vector<int> &v){
    sort(v.begin(), v.end(), greater<int>());
    int n = v.size();
    ll sum = 0;
    for(int i = 0, j = n - 1; i < n; i++, j -= 2){
        sum += 1LL * j * v[i];
    }
    return sum;
}

void mrsumit() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));
    int mx = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
            arr[i][j]--;
            mx = max(mx, arr[i][j]);
        }
    }

    vector<vector<int>> x(mx + 1), y(mx + 1);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            x[arr[i][j]].push_back(i);
            y[arr[i][j]].push_back(j);
        }
    }

    ll ans = 0;
    for(int col = 0; col <= mx; col++){
        ans += calSum(x[col]);
        ans += calSum(y[col]);
    }

    cout << ans << '\n';
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    //cin >> t;
    while (t--) {
        mrsumit();
    }
    return 0;
}