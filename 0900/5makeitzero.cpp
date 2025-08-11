#include<iostream>
using namespace std;
#include<algorithm>
#define ll long long
#include<vector>
#define nline '\n'
void solve() {

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    vector<int>s(n);
    s=v;
    sort(s.begin(),s.end(),greater<int>());
    int store=0;
    if(s[0]==0){
        cout<<"0"<<endl;
        return;
    }
    int xorr=v[0];
    for(int i=1; i<n; i++){

      xorr=xorr^v[i];
    }
    if(xorr==0){
        cout<<"1"<<endl;
        cout<<"1"<<" "<<n<<endl;
        return;
    }
    if(n%2==0){
    cout<<"2"<<endl;
    cout<<"1"<<" "<<n<<endl;
    cout<<"1"<<" "<<n<<endl;
    }
    else{
        cout<<"4"<<endl;
        cout<<"1"<<" "<<n-1<<endl;
        cout<<"1"<<" "<<n-1<<endl;
        cout<<n-1<<" "<<n<<endl;
         cout<<n-1<<" "<<n<<endl;
       

    }
    }
   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}