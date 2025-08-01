#include<iostream>
#include<vector>
using namespace std;
void solve(int t){
    while(t--){
    int n,k;
    cin>>n>>k;
    vector<long long>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];

    }
    vector<long long> copy;
    copy=v;
    sort(copy.begin(), copy.end());
    if(k>1){
        cout<<"yes"<<endl;
        

    }
    else{
        if(v==copy){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    
    
    }
}
int main(){
    int t;
    cin>>t;
    solve(t);
}