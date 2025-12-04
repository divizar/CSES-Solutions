#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main () {
    int n;
    cin >> n;
    int ans = 0;
    ll powfive = 5;
    while (powfive <= n) {
        ans += n/powfive;
        powfive *= 5;
    }
    cout << ans << '\n';
    return 0;
}

