#include <iostream>
#include <set>
using namespace std;
#define ll long long
#define nline '\n'
 
void solve() {
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        ll xk, yk, xq, yq;
        cin >> xk >> yk >> xq >> yq;
 
        // Store all possible moves for the knight and queen
        set<pair<ll, ll>> knight_moves, queen_moves;
 
        ll dx[] = {-a, -a, a, a, -b, -b, b, b};
        ll dy[] = {-b, b, -b, b, -a, a, -a, a};
 
        for (int i = 0; i < 8; i++) {
            knight_moves.insert({xk + dx[i], yk + dy[i]});
            queen_moves.insert({xq + dx[i], yq + dy[i]});
        }
 
        // Count common positions
        int count = 0;
        for (auto pos : knight_moves) {
            if (queen_moves.count(pos)) count++;
        }
 
        cout << count << nline;
    }
}
 
int main() {
    solve();
    return 0;
}