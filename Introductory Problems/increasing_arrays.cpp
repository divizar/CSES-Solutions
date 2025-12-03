#include <bits/stdc++.h>
 
typedef long long LL;
using namespace std;
 
int main () {
    LL n;
    cin >> n;
    vector <LL> a(n);
    for (auto &i : a) cin >> i;
    LL moves = 0;
    for (int  i = 1; i < n; i++) {
        if (a[i - 1] > a[i]) {
            moves += (a[i - 1] - a[i]);
            a[i] = a[i-1];
        } 
    }
    cout << moves << '\n';
    return 0;
}

