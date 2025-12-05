#include <bits/stdc++.h>

using namespace std;

vector <string> get_gc(int n) {
    if (n == 1) {
        return {"0", "1"};
    }

    vector <string> gc_n_minus_1 = get_gc(n-1);
    int len = gc_n_minus_1.size();
    vector <string> mirrored;
    for (int i = len - 1; i >= 0; i--) {
        mirrored.push_back(gc_n_minus_1[i]);
    }

    vector <string> ans;
    for (int i = 0; i < len; i++) {
        ans.push_back("0" + gc_n_minus_1[i]);
    }
    for (int j = 0; j < len; j++) {
        ans.push_back("1" + mirrored[j]);
    }
    return ans;
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector <string> gc;
    gc = get_gc(n);
    for (auto &i : gc)
        cout << i << '\n';
    return 0;
}
