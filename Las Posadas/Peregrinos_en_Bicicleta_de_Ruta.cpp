#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> ciclistas;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        ciclistas.push_back(v);
    }
    sort(ciclistas.rbegin(), ciclistas.rend());
    cout << ciclistas[k - 1];
    return 0;
}