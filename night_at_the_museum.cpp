#include <bits/stdc++.h>
using namespace std;

// Time: O(s.length())
// Space: O(1)
// https://codeforces.com/contest/731/problem/A
int main()
{
    string s;
    cin >> s;
    int ans = 0;
    int wheel_spot = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int cw = 0;
        int ccw = 0;
        int next = s[i] - 'a';
        if (next > wheel_spot)
        {
            cw = next - wheel_spot;
            ccw = wheel_spot + (25 - next + 1);
        }
        else if (next < wheel_spot)
        {
            cw = (25 - wheel_spot + 1) + next;
            ccw = wheel_spot - next;
        }
        ans += min(cw, ccw);
        wheel_spot = next;
    }
    cout << ans << endl;
}