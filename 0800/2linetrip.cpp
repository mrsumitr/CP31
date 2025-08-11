#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
void solve(int t){
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> v(n+1);
        v.push_back(0);
        int tank=0;
        for(int i=1; i<=n; i++){
            cin>>v[i];
            tank=max(tank,(v[i]-v[i-1]));
        }
        int diesel=2*(x-v[n]);
        tank=max(tank,diesel);
        cout<<tank<<endl;


    }
}
int main(){
    int t;
    cin>>t;
    solve(t);
}