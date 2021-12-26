#include <iostream>
#include <cmath>
int i, ja, jb, jc, jd, je, ans;

// Time: O(1)
// Space: O(1)
// https://codeforces.com/contest/263/problem/A
int main()
{
    for (i = 1; i <= 5; i++)
    {
        std::cin >> ja >> jb >> jc >> jd >> je;
        if (ja == 1 || je == 1)
        {
            ans += 2;
            break;
        }
        if (jb == 1 || jd == 1)
        {
            ans += 1;
            break;
        }
        if (jc == 1)
        {
            break;
        }
    }
    ans += std::abs(3 - i);
    std::cout << ans << std::endl;
}