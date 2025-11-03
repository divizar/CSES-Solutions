// Problem: Distinct Numbers
// URL: https://cses.fi/problemset/task/1621/
// Author: divizar

#include <bits/stdc++.h>
 
using namespace std;
 
int main () {
    int n;
    cin >> n;
    map <int, int> freq;
    while (n--) {
        int x;
        cin >> x;
        freq[x]++;
    }
    cout << freq.size() << '\n';
    return 0;
}
