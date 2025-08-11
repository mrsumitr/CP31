#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include <numeric>
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool ans=false;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                 // i have to find couple her that has hcf <=2 
              if(gcd(a[i],a[j])<=2){
                ans=true;
              }

            }
        }
        if(ans){
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