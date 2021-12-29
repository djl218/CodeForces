#include <bits/stdc++.h>

// Time: O(n log n)
// Space: O(n)
// https://codeforces.com/contest/405/problem/A
int main()
{
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    std::sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}