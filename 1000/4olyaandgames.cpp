#include<iostream>
using namespace std;
#include<algorithm>
#define ll long long
#include<vector>
#include<cmath>
#include<bitset>
#define nline '\n'
#include<climits>

void solve(){
  
int n;
cin>>n;
vector<vector<int>> v;
for(int i=0; i<n; i++){
    int cols;
    cin>>cols;
    vector<int> part(cols);
    for(int j=0; j<cols; j++){
        cin>>part[j];
    }
    sort(part.begin(), part.end());
    v.push_back(part);
}

if(n==1){
    cout<<v[0][0]<<endl;
    return;
}
if(n==2){
    cout<<max(v[0][1],v[1][1])+min(v[0][0],v[1][0])<<endl;
    return;
}
vector<int> data;
int minD=INT_MAX;
int minS=INT_MAX;
ll sum=0;
for(int i=0; i<n; i++){
    for(int j=0; j<2; j++){
        if(j==0){
            minD=min(minD,v[i][j]);
        }
        if(j==1){
            minS=min(minS,v[i][j]);
            sum+=v[i][j];
        }
        
    }
}
cout<<minD+sum-minS<<endl;
// in this i forget, how to take data in 2d array /
//first create a 2d array vector<vector<int,int>> v;
//run a for loop for rows;
// then take input how many cols in speific rows 
// then crete a vector to store all elemets for that rows like, rows 0 row 1
// then push_back it into the 2d vector
}






   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}