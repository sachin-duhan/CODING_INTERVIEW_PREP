#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    map<int, int> m;
    int i = 0;
    while (n--)
    {
        cin >> arr[i];
        m[arr[i++]]++;
    }
    int ans = 0;
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] < arr[n - 1])
            {
                if (m.find(arr[i] + arr[j]) != m.end())
                    ans++;
            }
            else
                break;
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}