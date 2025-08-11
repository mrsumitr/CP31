#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include<cmath>
#include<climits>

using namespace std;
int solve(){
        int n;
        cin>>n;
        vector<long long> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        long long diff=v[1]-v[0];
        for(int i=1; i<n; i++){
            if(v[i-1]>v[i]){
                return 0;
            }
        }
        for(int i=1; i<n; i++){
            
            diff=min(diff,(v[i]-v[i-1]));
        }
        return diff/2+1;
        
        
}
int main(){
    int t;
    cin>>t;
    while(t--){
   cout<< solve();
   cout<<endl;
}
}