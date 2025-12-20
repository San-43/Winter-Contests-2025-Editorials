#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int tmp2 = 0, tmp3 = 0;
    while (n % 2 == 0) {
        n /= 2;
        ++tmp2;
    }
    while (n % 3 == 0) {
        n /= 3;
        ++tmp3;
    }
    if (n == 1 && tmp2 <= tmp3) {
        cout << 2 * tmp3 - tmp2 << '\n';
    } else {
        cout << -1 << '\n';
    }
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