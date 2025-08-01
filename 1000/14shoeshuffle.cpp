#include<iostream>
using namespace std;
#include<algorithm>
#define ll long long
#include<vector>
#include<cmath>
#include<bitset>
#define nline '\n'
#include<climits>
#include<unordered_map>
#include<map>
#include<set>

void solve(){
  int n;
  cin>>n;
  ll sum=0;
  int fre=0;
  map<int,int> mp;
  int count=0;
  for(int i=0; i<n; i++){

    int ele;
    cin>>ele;
    mp[ele]++;
    
  }
  int freq=0;
  for(auto it: mp){
    if(it.second==1){
         cout<<"-1"<<endl;
         return;
     }
  }
 for(auto it: mp){
     
     
         if(it.second%2==0){
         count+=it.second;
         int data=it.second;
         freq=count;
         while(data){
             cout<<freq<<" ";
             data--;
             freq--;
        }
         }
         else{
             int prev=count;
             count=count+it.second;
             cout<<count<<" ";
             for(int i=prev+1; i<count; i++ ){
                 cout<<i<<" ";
             }
         }
     
 }
cout<<endl;
   
  

}






   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}