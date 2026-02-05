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
void mrsumit() {
    int a,b,k;
    cin>>a>>b>>k;
    vector<int> A(k); 
    vector<int> B(k);
    vector<int> c_a(a+1,0);
    vector<int> c_b(b+1,0);
    for(int i=0; i<k; i++){
      cin>>A[i];
      c_a[A[i]]++;
    }
    for(int i=0; i<k; i++){
      cin>>B[i];
      c_b[B[i]]++;
    }
    ll ans=0;
    for(int i=0; i<k; i++){
      long long valid_partners = (k - 1) - (c_a[A[i]] - 1) - (c_b[B[i]] - 1);
      ans += valid_partners;
    }
    cout<<ans/2<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        mrsumit();
    }
    return 0;
}