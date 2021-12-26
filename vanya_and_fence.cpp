#include <iostream>
long long i, n, h, ans, x;

// Time: O(n)
// Space: O(1)
// https://codeforces.com/contest/677/problem/A
int main()
{
    std::cin >> n >> h;
    ans = n;
    for (i = 0; i < n; i++)
    {
        std::cin >> x;
        if (x > h)
        {
            ans++;
        }
    }
    std::cout << ans << std::endl;
    return 0;
}