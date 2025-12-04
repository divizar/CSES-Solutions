#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = (int)(1e9 + 7);

int main () {
    ll n;
    cin >> n;

    ll x = 1;
    while (n--) {
        x*=2;
        x %= mod;
    }    
    cout << x << '\n';
    return 0;
}

