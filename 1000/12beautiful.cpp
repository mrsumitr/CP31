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
#include<map>
#include<set>

void solve(){
 long long n, k, b, s;
        cin >> n >> k >> b >> s;
        long long minimum_s = (k * b);
        long long maximum_s = (k * b) + (k - 1) * n;
        if(s < minimum_s || s > maximum_s)
            cout << "-1" << endl;
        else
        {
            vector<long long> ans(n, 0);
            ans[0] = minimum_s;
            s -= minimum_s;
            for (int i = 0; i < n; i++) // n
            {
                long long add = min(k - 1, s);
                ans[i] += add;
                s -= add;
            }
            for (long long i = 0; i < n; i++) // n
                cout << ans[i] << " ";
            cout << endl;
}
}
   
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
