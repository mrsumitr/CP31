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
    vector<long long> c;
    vector<long long> a(n);
    vector<long long> b;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    sort(a.begin(), a.end());
    int num=a[0];
    int count=0;
    for(int i=0; i<n; i++){
        if(a[i]==a[0]){
            count++;
        }
    }
    int run=count;
    while(count){
        count--;
        b.push_back(num);
        
    }
    for(int i=run; i<n; i++){
        c.push_back(a[i]);
    }
    int lb=b.size();
    int lc=c.size();
    if(lb==0 || lc==0){
        cout<<"-1"<<endl;
    }
    else{
    cout<<lb<<" "<<lc<<endl;
    for(int i=0; i<lb; i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<lc; i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;
    }

    

}
}
int main(){
    solve();
        
    }


