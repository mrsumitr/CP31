#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){

int n;
cin>>n;
vector<int> v;

for(int i=0; i<n; i++){
    cin>>v[i];
    
}
int minNum=abs(v[0]);
    for(int i=0; i<n; i++){
        minNum=min(minNum,abs(v[i]));
    }
    cout<<minNum<<endl;
}