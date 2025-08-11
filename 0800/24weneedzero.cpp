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
        vector<int> v(n);
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        
        int xorr=0;
        int data=0;
        int ans;
        if(n==1){
            cout<<v[0]<<endl;
        }
        else{
            
            for(int i=0; i<n; i++){
                xorr=xorr^v[i];
            }
            ans=xorr;
            for(int i=0; i<n; i++){
                int neww=xorr^v[i];
                a[i]=neww;
            }

            for(int i=0; i<n; i++){
                data=data^a[i];
            }
            if(data==0){
                cout<<ans<<endl;
            }
            else{
                cout<<"-1"<<endl;
            }
        }
    }
}
int main(){
    solve();
}