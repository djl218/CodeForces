#include <iostream>
int n, i, petya, vasya, tonya, score, ans;

// Time: O(n)
// Space: O(1)
// https://codeforces.com/problemset/problem/231/A
int main()
{
    std::cin >> n;
    for (i = 0; i < n; i++)
    {
        std::cin >> petya >> vasya >> tonya;
        score = petya + vasya + tonya;
        if (score >= 2)
        {
            ans++;
        }
        petya = 0;
        vasya = 0;
        tonya = 0;
    }
    std::cout << ans << std::endl;
}