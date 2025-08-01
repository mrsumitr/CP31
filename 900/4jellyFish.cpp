//#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#include<algorithm>

int main()
{
    int t;
    cin >> t;
    while (t--) 
    {
        long long a, b, n;
        cin >> a >> b >> n;
        long long x[n];
        for (int i = 0; i < n; i++) // n
            cin >> x[i];
        // inputs

        long long maximum_time = b;
        for (int i = 0; i < n; i++) // n
            maximum_time += min(x[i], a - 1);

        cout << maximum_time << endl;
    }
    return 0;
}