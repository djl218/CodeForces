#include <bits/stdc++.h>
using namespace std;

// Time: O(n)
// Space: O(1)
// https://codeforces.com/contest/59/problem/A
int main()
{
    string str;
    int upper_count = 0;
    int lower_count = 0;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (isupper(str[i]))
        {
            upper_count++;
        }
        if (islower(str[i]))
        {
            lower_count++;
        }
    }
    if (upper_count > lower_count)
    {
        for (int i = 0; i < str.length(); i++)
        {
            str[i] = toupper(str[i]);
        }
    }
    else
    {
        for (int i = 0; i < str.length(); i++)
        {
            str[i] = tolower(str[i]);
        }
    }
    cout << str << endl;
}