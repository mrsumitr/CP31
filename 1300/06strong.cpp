//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
#include<map>
#define ll long long
#define nline '\n'
#include<set>
void mrsumit() {
    

  
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int current_cost = 0;
    for (int i = 0; i < n; i++) {
        int check_index = i - current_cost;
        if (check_index >= 0 && a[check_index] >= current_cost + 1) {
            current_cost++;
        }
        cout << current_cost << " ";
    }
    cout << nline;
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