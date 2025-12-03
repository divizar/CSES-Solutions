#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

ll answer (ll row, ll col) {
    ll mx = max(row, col);
    if (mx % 2 == 0) {
        if (col == 1) return mx*mx;
        else if (mx == row) return mx*mx - (col-1);
        else if (row < mx) return mx*mx - (mx-1) - (mx-row);
    }

    else {
        if (row == 1) return mx*mx;
        else if (mx == col) return mx*mx - (row-1);
        else if (col < mx) return mx*mx - (mx-1) - (mx-col);
    }
    return 0;
}

void solve () {
    ll row, col, ans;
    cin >> row >> col; 
    cout << answer(row, col) << '\n';
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}