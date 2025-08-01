#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

void solve(){
    int t;
    cin>>t;

    while(t--){
     int n,k;
     cin>>n>>k;
     bool ans=false;
     vector<int> v(n);
     for(int i=0; i<n; i++){
        cin>>v[i];
        
     }  
     for(int i=0; i<n; i++){
        if(v[i]==k){
            
            ans=true;
            
        }
     }
     if (!ans){
        cout<<"NO"<<endl;
     }
     else{
        cout<<"YES"<<endl;
     }
    
     

}
}

int main(){
    solve();

}