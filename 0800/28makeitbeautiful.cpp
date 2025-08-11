#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
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
        int sum=v[0];

        for(int i=1; i<n; i++){
            
            if(sum==v[i]){
                swap(v[i-1],v[n-1]);
            }
            sum+=v[i];
        }
        int sum2=v[0];
        for(int i=1; i<n; i++){
            
            if(sum2==v[i]){
                ans=true;
                cout<<"NO"<<endl;
            }
            sum2+=v[i];
        }
        if(!ans){
            cout<<"YES"<<endl;
            for(int i=0; i<n; i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }

    }
}
int main(){
    solve();
}