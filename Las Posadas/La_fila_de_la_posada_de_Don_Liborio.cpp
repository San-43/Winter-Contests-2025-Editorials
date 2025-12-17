#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    queue<int> orden;                 // cola de prioridades e
    map<int, queue<int>> grupos;      // e -> cola de ids

    while (n--) {
        char op;
        cin >> op;

        if (op == 'L') {
            int id, e;
            cin >> id >> e;

            if (grupos[e].empty()) {
                orden.push(e);
            }
            grupos[e].push(id);

        } else { // 'R'
            int e = orden.front();
            int id = grupos[e].front();
            cout << id << '\n';

            grupos[e].pop();
            if (grupos[e].empty()) {
                orden.pop();
            }
        }
    }

    return 0;
}