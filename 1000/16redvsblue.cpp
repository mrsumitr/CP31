//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#include<algorithm>
#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#include<vector>
#include<cmath>
#include<bitset>
#define nline '\n'
#include<climits>
#include<unordered_map>
#include<map>
#include<set>

void solve(){
  int n,r,b;
  cin>>n>>r>>b;
  string s;
        int length_of_red = r / (b + 1);
        int extra_red = r % (b + 1);
        for (int times = 1; times <= b + 1; times++) // b+1
        {
            for (int i = 0; i < length_of_red; i++) // r/b+1
                s += 'R';
            if (extra_red > 0)
            {
                s += 'R';
                extra_red--;
            }
            if (times != b + 1)
                s += 'B';
        }
        cout << s << endl;
    }
    
 






   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}