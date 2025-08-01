#include<iostream>
using namespace std;
#include<algorithm>
#define ll long long
#include<vector>
#include<cmath>
#include<bitset>
#define nline '\n'
#include<climits>
#include<unordered_map>
void solve() {
    int n, k;
    cin >> n >> k;
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        mp[data]++;
    }

    // If any number is already divisible by k
    for (auto it : mp) {
        if (it.first % k == 0) {
            cout << 0 << nline;
            return;
        }
    }

    // Special handling for k == 2
    if (k == 2) {
        cout << 1 << nline;
        return;
    }

    // Special handling for k == 4
    if (k == 4) {
        if (mp[2] >= 2 || mp[6]>=2 || mp[10]>=2) {
            cout << 0 << nline;
            return;
        }
        if((mp[2]>0 && mp[6]>0)|| (mp[2]>0 && mp[10]>0) || (mp[10]>0 && mp[6]>0)){
            cout<<"0"<<endl;
            return;
        }
        if ((mp[2] > 0 || mp[6] > 0 || mp[10]) && (mp[1] > 0 || mp[5] > 0 || mp[9]>0)) {
            cout << 1 << nline;
            return;
        }
    }

    // General case: calculate min increment to reach divisibility
    int minVal = INT_MAX;
    for (auto it : mp) {
        int data = k - (it.first % k);
        minVal = min(data, minVal);
    }

    cout << minVal << nline;
}
   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}