// Problem: Apartments
// URL: https://cses.fi/problemset/task/1084/
// Author: divizar

#include <bits/stdc++.h>

#define REP(i,a,b) for (int i = a; i < b; i++)
using namespace std;

int main () {
    int n, m, k;
    cin >> n >> m >> k;
    int a[n], b[m];
    REP(i,0,n) cin >> a[i];
    REP(i,0,m) cin >> b[i];

    sort(a, a + n);
    sort(b, b + m);

    int i = 0, j = 0, count = 0;
    while (i < n && j < m) {
        if (abs(a[i] - b[j]) <= k) {
            count++;
            i++;
            j++;
        }
        else if (b[j] < a[i] - k) {
            j++;
        }
        else i++;
    }
    cout << count << '\n';
    return 0;
}
