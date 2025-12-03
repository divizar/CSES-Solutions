#include <bits/stdc++.h>
 
#define all(x)  (x).begin(), (x).end()
typedef long long LL;
using namespace std;
 
int main () {
    LL n;
    cin >> n;
    LL total = n * (n + 1) / 2;
    LL sum = 0;
 
    for (int i = 0; i < n - 1; i++) {
        LL x; cin >> x;
        sum += x;
    }
 
    cout << total - sum << endl;
    return 0;
}
