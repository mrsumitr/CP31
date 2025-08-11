#include<iostream>
using namespace std;
#include<vector>
void solve(){
    int t;
    cin>>t;
    
    while(t--){

        bool ans=false;
       int n;
       cin>>n;
       vector<int> v(n);
       for(int i=0; i<n; i++){
        cin>>v[i];
       }
       int s=v[0];
       for(int i=0; i<n; i++){
        if(s>v[i]){
            cout<<"NO"<<endl;
            ans=true;
            break;
        }
       }

    if(!ans){
        cout<<"Yes"<<endl;
    }
    }

}
int main()
{
    solve();
}