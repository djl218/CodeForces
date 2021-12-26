#include <iostream>
#include <string>
int n, i, curr, a, d;
std::string s;

// Time: O(n)
// Space: O(1)
// https://codeforces.com/contest/734/problem/A
int main()
{
    std::cin >> n >> s;
    for (i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            a++;
        }
        else if (s[i] == 'D')
        {
            d++;
        }
    }
    if (a > d)
    {
        std::cout << "Anton" << std::endl;
    }
    else if (d > a)
    {
        std::cout << "Danik" << std::endl;
    }
    else
    {
        std::cout << "Friendship" << std::endl;
    }
}