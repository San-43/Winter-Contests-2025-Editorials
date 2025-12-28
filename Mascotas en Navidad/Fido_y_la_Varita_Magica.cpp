#include <bits/stdc++.h>

typedef long long int ll;

ll nums[200005];

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        bool hasEven = false, hasOdd = false;
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            cin >> nums[i];
            if ((nums[i] & 1) == 0)
                hasEven = true;
            else
                hasOdd = true;
        }
        if (hasEven && hasOdd)
        {
            sort(nums, nums + N);
        }
        for (int i = 0; i < N; i++)
        {
            cout << nums[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}