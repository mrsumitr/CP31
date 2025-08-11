#include<iostream>
using namespace std;
void solve(){
    int t;
    cin>>t;
    while(t--){
        long long x,k;
        cin>>x>>k;
        if(x%k!=0){
            cout<<"1"<<endl;
            cout<<x<<endl;
        }
        else if(x-1%k!=0){
            cout<<"2"<<endl;
            cout<<x-1<<" "<<"1"<<endl;
        }
    }
}
int main(){
    solve();

    
}
