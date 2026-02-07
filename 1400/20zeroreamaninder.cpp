#include<bits/stdc++.h>
using namespace std;
#define ll long long

void mrsumit() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    map<int, int> counts; 
    ll max_move = 0;

    for(int i=0; i<n; i++){
        cin >> v[i];
        if (v[i] % k == 0) continue; 
        
        int ne = k - (v[i] % k);
        int count = counts[ne]; 
        counts[ne]++;

        ll current_move = 1LL * count * k + ne;
        max_move = max(max_move, current_move + 1);
    }
    
    cout << max_move << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        mrsumit();
    }
    return 0;
}