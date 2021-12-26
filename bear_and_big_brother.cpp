#include <iostream>
int a, b, ans;

// Time: O(1)
// Space: O(1)
// https://codeforces.com/contest/791/problem/A
int main()
{
    std::cin >> a >> b;
    ans = 0;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        ans++;
    }
    std::cout << ans << std::endl;
}