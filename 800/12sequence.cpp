#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
void solve(){
    int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        vector<long long> v(n);
        vector<long long> ans;
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        ans.push_back(v[0]);
        bool asd=false;
        if(n==1){
            cout<<"1"<<endl;
            asd=true;
            cout<<v[0]<<endl;
        }
        else{
            
            
        for(int i=1; i<n; i++){
            if(v[i-1]<=v[i]){

                ans.push_back(v[i]);
                
            }
            else{
                if((v[i]-1)!=0){
                ans.push_back((v[i]-1));
                ans.push_back(v[i]);
            }
            else{
                ans.push_back(v[i]);
                ans.push_back(v[i]);
            }
            }
        }
        }
        if(!asd){
        cout<<ans.size()<<endl;
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        }

     }
}
int main(){
    solve();
}