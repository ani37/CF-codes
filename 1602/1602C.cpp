#include<bits/stdc++.h>
using namespace std;

const int N = 200005;
vector<int> divisors[N];

const int B = 32;
int cnt[B];
void preprocess() {
    for (int i = 2; i < N; i++) {
        for (int j = i; j < N; j += i) {
            divisors[j].push_back(i);
        }
    }
}


void solve() {
    // reset
    for (int i = 0; i < B; i++) cnt[i] = 0;

    // solve each test case
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        for (int pos = 0; pos < B; ++pos) {
            if (x & (1 << pos)) cnt[pos]++;
        }
    }

    int hcf = 0;
    for (int i = 0; i < B; i++) {
        if (cnt[i]) {
            if (hcf) hcf = __gcd(hcf, cnt[i]);
            else hcf = cnt[i];
        }
    }

    cout << 1 << " ";
    if (hcf) {
        for (int d : divisors[hcf]) cout << d << " ";
    }
    else {
        for (int d = 2; d <= n; d++) cout << d << " ";
    }
    cout << "\n";
}

int main() {
    // da preprocessing
    preprocess();

    // fast I/O
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    // generic test-case boilerplate
    int tc; cin >> tc;
    while (tc--) solve();

    return 0;
}