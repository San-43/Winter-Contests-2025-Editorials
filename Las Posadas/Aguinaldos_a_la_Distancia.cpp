#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    cout << (n / 10) + (n % 10) << edl;
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
