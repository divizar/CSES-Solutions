#include <bits/stdc++.h>

using namespace std;
const int MAX = 26;

int main () {
    string input;
    cin >> input;
    int size = input.length();
    vector <int> count(MAX, 0);
    for (char &c : input) {
        count[c - 'A' - 0]++;
    }
    int oddPos = -1;
    for (int i = 0; i < MAX; i++) {
        if (count[i]%2 == 1) {
            if (oddPos == -1) oddPos = i;
            else {
                cout << "NO SOLUTION" << '\n';
                return 0;
            }
        }

    }
    if (size%2 == 0 && oddPos != -1) {
        cout << "NO SOLUTION" << '\n';
        return 0;
    }
    else if (size%2 == 1 && oddPos == -1) {
        cout << "NO SOLUTION" << '\n';
        return 0;
    }

    string ans;
    for (int i = 0; i < MAX; i++) {
        for(int j = 0; j < count[i]/2; j++) {
            ans += (char) ('A' + i);
        }
    }
    cout << ans; 
    if (oddPos != -1) cout << (char)('A' + oddPos);
    reverse(ans.begin(), ans.end());
    cout << ans << '\n';
    return 0;
}

