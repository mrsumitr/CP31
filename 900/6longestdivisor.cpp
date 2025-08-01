#include<iostream>
using namespace std;
#include<algorithm>
#define ll long long
#include<vector>
#define nline '\n'
void solve() {
    ll n;
    cin>>n;
    ll i=1;
    while(n%i==0){
        i++;
    }
    cout<<i-1<<endl;
 
    }
   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}