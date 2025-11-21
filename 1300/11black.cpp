//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
#include<map>
#define ll long long
#define nline '\n'
#include<set>
struct Counts{
    int black=0;
    int white=0;
};


Counts dfs(int node, vector<int> adj[], string &s, int &total_subtree){

    Counts current_counts;
    if(s[node-1]=='W'){
        current_counts.white=1;
    }
    else{
        current_counts.black=1;
    }
    for(int child: adj[node]){
        Counts child_counts=dfs(child,adj,s,total_subtree);

        current_counts.white+=child_counts.white;
        current_counts.black+=child_counts.black;

    }

    if(current_counts.white==current_counts.black){
        total_subtree++;
    }
    return current_counts;






}
void mrsumit() {

    int n;
    cin>>n;
    vector<int> adj[n+1];
    for(int i=2; i<=n; i++){
        int parent;
        cin>>parent;
        adj[parent].push_back(i);
    }

    string s;
    cin>>s;

    int total_subtree=0;
    dfs(1, adj, s,total_subtree);
    cout<<total_subtree<<endl;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        mrsumit();
    }
    return 0;
}