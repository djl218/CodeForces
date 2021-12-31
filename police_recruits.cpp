#include <bits/stdc++.h>
using namespace std;

// Time: O(n)
// Space: O(1)
// https://codeforces.com/contest/427/problem/A
int main()
{
    int n;
    cin >> n;
    int crimes = 0;
    int officers = 0;
    for (int i = 0; i < n; i++)
    {
        int curr;
        cin >> curr;
        if (officers == 0 && curr == -1)
        {
            crimes++;
        }
        else if (curr == -1)
        {
            officers--;
        }
        else
        {
            officers += curr;
        }
    }
    cout << crimes << endl;
}