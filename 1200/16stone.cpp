//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
#include<map>
#define ll long long
#define nline '\n'

void solve() {

    int n,q;
    cin>>n>>q;
    ll sum=0;
    map<int,int> mp;
    for(int i=1; i<=n; i++){
        int data;
        cin>>data;
        mp[i]=data;
        sum+=data;
    }
    int fill_val=-1;
    for(int i=0; i<q; i++){
        int type;
        cin>>type;
        if(type==1){
            int in,x;
            cin>>in>>x;
            in;

            ll old_val;
            if(mp.count(in)){
                old_val=mp[in];
            }
            else{
                old_val=fill_val;
            }

            sum=sum-old_val+x;
            mp[in]=x;
        }
        else{

                int d;
                cin>>d;
                sum=1LL*n*d;
                fill_val=d;
                mp.clear();

        }
        cout<<sum<<endl;
    }
    


        
    }

    


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    
    while (t--) {
        solve();
    }
    return 0;
}