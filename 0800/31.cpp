#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if(n==a && n==b){
            cout<<"YES"<<endl;
        }
        else if(n-a-b>=2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
int main(){
    solve();
}