#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
#include<map>
#define ll long long
#define nline '\n'
int mod=1e9+7;
void mrsumit() {
    long long n,x,y;
    cin >> n >> x >> y;
    long long a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int numOdds = 0;
    for(int i = 0; i < n; i++) { //O(n)
        if(a[i] % 2 == 1) {
            numOdds++;
        }
    }

    int aliceStart, bobStart;
    aliceStart = x % 2;
    bobStart = 1 - aliceStart;

    int aliceEnd, bobEnd;

    if(numOdds % 2 == 0) {
        aliceEnd = aliceStart;
        bobEnd = bobStart;
    }
    else{
        aliceEnd = 1 - aliceStart;
        bobEnd = 1 - bobStart;
    }

    if(y % 2 == aliceEnd) {
        cout << "Alice\n";
    }
    else{
        cout << "Bob\n";
    }
    //soln is simple, just think if pairy of xor or addition of d is same to y then one will win
    // other wise we have given plus 3 it will change piraty to , so it can change it is just 
    // both xor and + behaves in same piraty..

    // vector<int> bits(50);
    // for(int i=0; i<50; i++){
    //   bits[i]=(1<<i)&y;
    // }
    // vector<vector<int>> store(n, vector<int> (50,0));
    // for(int i=0; i<n; i++){
    //   for(int j=0; j<50; j++){
    //       store[i][j]=(1<<j)&v[i];
    //   }
    // }


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        mrsumit();
    }
    return 0;
}