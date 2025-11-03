// Problem: Hidden Integer
// URL: https://cses.fi/problemset/task/3112
// Author: divizar



#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int l = 1, r = 1e9;
    string response;
    while (l <= r) {
        int m = (l + r)/2;
        cout << "? " << m << '\n';
        cout.flush();
        cin >> response;
        if (response == "YES") {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    cout << "! " << l << endl;
    return 0;
}

