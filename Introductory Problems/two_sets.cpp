#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main () {
    ll n;
    cin >> n;
    ll sum = (n*(n+1))/2;
    if (sum%2) {
        cout << "NO" << '\n';
    }
    else {
        cout << "YES" << '\n';
        set <ll> s1, s2;
        ll target = sum/2;
        int t = n;
        for (int i = 1; i <= n; i++) s1.insert(i);
        while (s1.count(target)==0) {
            target -= t;
            s2.insert(t);
            s1.erase(t);
            t--;
        }
        s2.insert(target);
        s1.erase(target);
        cout << s1.size() << '\n';
        for (auto &i : s1) cout << i << " ";
        cout << '\n';
        cout << s2.size() << '\n';
        for (auto &j : s2) cout << j << " ";
    }
    cout << endl;
    return 0;
}
