#include <bits/stdc++.h>

using ll = long long int;

#define edl '\n'

using namespace std;

void solve() {
    int p, y;
    cin >> p >> y;

    int x = 0;

    for (int x = y; x > p; x--) {
        bool ok = true;
        for (int i = 2; i * i <= x && i <= p; i++) {
            if (x % i == 0) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << x << edl;
            return;
        }
    }

    cout << -1 << edl;
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
