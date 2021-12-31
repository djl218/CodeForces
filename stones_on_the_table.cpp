#include <bits/stdc++.h>
using namespace std;

// Time: O(n)
// Space: O(1)
// https://codeforces.com/contest/266/problem/A
int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            ans++;
        }
    }
    cout << ans << endl;
}