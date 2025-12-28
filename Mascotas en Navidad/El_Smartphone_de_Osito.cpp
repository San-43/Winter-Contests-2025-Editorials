#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string P;
    cin >> P;

    int n;
    cin >> n;

    bool hasFirst = false;
    bool hasSecond = false;

    for (int i = 0; i < n; i++)
    {
        string w;
        cin >> w;

        if (w == P)
        {
            cout << "SI";
            return 0;
        }

        if (w[1] == P[0])
            hasFirst = true;
        if (w[0] == P[1])
            hasSecond = true;
    }

    if (hasFirst && hasSecond)
        cout << "SI";
    else
        cout << "NO";

    return 0;
}