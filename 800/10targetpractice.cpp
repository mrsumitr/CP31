#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int calculate_score(const vector<string>& grid) {
    int score = 0;
   int arr[] = {1, 2, 3, 4, 5, 5, 4, 3, 2, 1};
vector<int> ring_values(arr, arr + 10);

    
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (grid[i][j] == 'X') {
                score += min(ring_values[i], ring_values[j]);
            }
        }
    }
    
    return score;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        vector<string> grid(10);
        for (int i = 0; i < 10; ++i) {
            cin >> grid[i];
        }
        cout << calculate_score(grid) << endl;
    }
    
    return 0;
}