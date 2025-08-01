#include<iostream>
using namespace std;
#include<algorithm>
#define ll long long
#include<vector>
#include<numeric>
#define nline '\n'

void solve(){

int n;
cin>>n;

int ans=0;
vector<int> v(n);
for(int i=0; i<n; i++){
    cin>>v[i];
}
int k=abs(v[0]-1);

for(int i=1; i<n; i++){
    k = gcd(k, abs(v[i] - (i + 1)));

}
cout<<k<<endl;
}



    
   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}