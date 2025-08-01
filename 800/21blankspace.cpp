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
        for(int i=0; i<n; i++){
            cin>>v[i];
            
        }
        int count=0;
        int ans=0;
        for(int i=0; i<n; i++){
            if(v[i]==0){
                count++;
            }
            else{
                
                ans=max(ans,count);
                count=0;
            }
            
        }
        cout<<max(count,ans)<<endl;
    }
}
int main(){
    solve();
}