#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include<cmath>
using namespace std;
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool ans=false;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
            
        }
        double multiply=v[0];
        for(int i=1; i<n; i++){
            multiply=multiply*v[i];
        }
        multiply=sqrt(multiply);
        //cout<<multiply<<endl;
        double mul=v[0];
        for(int i=1; i<n; i++){
            if(mul==multiply){
                ans=true;
                cout<<i<<endl;
                break;
            }
            else{
                mul=mul*v[i];
            }
            
            
        }
       if(!ans){
        cout<<"-1"<<endl;
       } 

    }
}
int main(){
    solve();
}