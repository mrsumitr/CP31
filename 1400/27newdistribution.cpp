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
vector<int> parent, sz;
int find(int a) {
    if(a == parent[a]) return a;
    else return parent[a] = find(parent[a]);
}
void join(int a, int b) {
    a = find(a);
    b = find(b);
    if(a == b) return;
    if(sz[a] < sz[b]) swap(a,b);
    parent[b] = a;
    sz[a] += sz[b];
}
void mrsumit() {
    int n,m;
    cin>>n>>m;
    parent.resize(n);
    for(int i = 0; i < n; i++) {
        parent[i] = i;
    }
    sz.resize(n,1);
 
    for(int i = 0; i < m; i++) { // O((sigma k_i) * alpha(n))
        int k;
        cin >> k;
        int first;
        if(k)
        cin >> first;
        first--;
        for(int j = 1; j < k; j++) {
            int a;
            cin >> a;
            a--;
            join(first,a);
        }
    }
 
    for(int i = 0; i < n; i++) { // O(n * alpha(n))
        cout << sz[find(i)] << ' ';
    }
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