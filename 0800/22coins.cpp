#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include<cmath>
using namespace std;
void solve(){
    long long t;
    cin>>t;
    bool ans=false;
    while(t--){
        long long n,k;
        cin>>n>>k;
        if(n%2==0 ){
            ans=true;
            cout<<"YES"<<endl;
        }
        else if(n%2!=0 && k%2!=0){
            
                ans=true;
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