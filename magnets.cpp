#include <bits/stdc++.h>
using namespace std;

// Time: O(n)
// Space: O(1)
// https://codeforces.com/contest/344/problem/A
int main()
{
    int n;
    int count = 0;
    string group_curr, next;
    cin >> n;
    cin >> group_curr;
    next = group_curr;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> next;
        if (next != group_curr)
        {
            count++;
            group_curr = next;
        }
    }
    cout << (group_curr == next ? count + 1 : count) << endl;
}