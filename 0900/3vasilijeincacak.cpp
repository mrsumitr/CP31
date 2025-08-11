#include<iostream>
using namespace std;
#include<algorithm>
#define ll long long
#include<vector>
#include<unordered_map>
#define nline '\n'
void solve() {
    ll n,k,x;
    cin>>n>>k>>x;
    ll minSum=k*(k+1)/2;
    ll maxSum=n*(n+1)/2-(n-k)*(n-k+1)/2;
    if(x<minSum || x>maxSum){
        cout<<"NO"<<endl;
        return;
    }
    else{
        cout<<"YES"<<endl;
    }
    

}
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}