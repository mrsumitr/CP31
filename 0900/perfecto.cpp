#include<iostream>
using namespace std;
#include<algorithm>
#define ll long long
#include<vector>
#include<unordered_map>

#define nline '\n'
void solve() {
    ll n;
    cin>>n;
    double long ans=sqrt(n*(n+1)/2);
    if(ans==static_cast<int>(ans)){
        cout<<"-1"<<endl;
        return;

    }
    if(n==1){
        cout<<"-1"<<endl;
    }
    else{
        cout<<"2 1 ";
        for(int i=3; i<=n; i++){
            double long anss=sqrt(i*(i+1)/2);
            if(anss==static_cast<int>(anss)){
                cout<<i+1<<" "<<i<<" ";
                i++;
            }
            else{
            cout<<i<<" ";
            }
        }
        cout<<endl;
    }

}
    

   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}