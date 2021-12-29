#include <bits/stdc++.h>
using namespace std;
string l1, l2;

// Time: O(n)
// Space: O(1)
// https://codeforces.com/contest/112/problem/A
int main()
{
    cin >> l1 >> l2;
    int n = l1.length();
    for (int i = 0; i < n; i++)
    {
        if (tolower(l1[i]) < tolower(l2[i]))
        {
            cout << "-1" << endl;
            exit(0);
        }
        if (tolower(l2[i]) < tolower(l1[i]))
        {
            cout << "1" << endl;
            exit(0);
        }
    }
    cout << "0" << endl;
}