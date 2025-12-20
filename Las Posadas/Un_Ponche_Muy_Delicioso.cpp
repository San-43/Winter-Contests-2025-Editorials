#include <bits/stdc++.h>

typedef long long int ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<ll, ll> nums;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            nums[x]++;
        }
        bool is_segment = false;
        for (auto &i : nums)
        {
            if (i.second > 1)
            {
                cout << "Muy delicioso <3 \n";
                is_segment = true;
                break;
            }
        }
        if (!is_segment)
        {
            cout << "Delicioso (:\n";
        }
        nums.clear();
    }

    return 0;
}