#include <bits/stdc++.h>
using namespace std;

void solve() {
    // take in string
    string s; cin >> s;
    int L = (int)s.length();
    string a = "", b = "";

    // value = alphabetically smallest alphabet in string
    // index = it's index in string
    int value = 100, index = -1;
    for (int i = 0; i < L; i++) {
        int cur = s[i] - 'a';

        // we found a new smallest, record it
        if (cur < value) {
            value = cur;
            index = i;
        }
    }

    // string a is the smallest character
    a += s[index];

    // b is rest of the string
    for (int i = 0; i < L; i++) {
        if (i != index) b += s[i];
    }

    // output
    cout << a << " " << b << "\n";
}

int main() {
    // fast I/O
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    // generic test-case boilerplate
    int tc; cin >> tc;
    while (tc--) solve();

    return 0;
}