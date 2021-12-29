#include <bits/stdc++.h>
using namespace std;
string s;

// Time: O(s.length)
// Space: O(1)
// https://codeforces.com/contest/236/problem/A
int main()
{
    cin >> s;
    set<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        st.insert(s[i]);
    }
    if (st.size() % 2 != 0)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
    {
        cout << "CHAT WITH HER!" << endl;
    }
}