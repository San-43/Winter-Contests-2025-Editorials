#include <bits/stdc++.h>

using ll = long long int;

using namespace std;

void solve() {
    ll s;
    cin >> s;
    ll res = 0;
    while (s >= 10) {
        ll x = s - s % 10;
        res += x;
        ll back = x / 10;
        s = s - x + back;
    }
    res += s;
    cout << res << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
