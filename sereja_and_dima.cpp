#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s_score = 0, d_score = 0;
    int left = 0, right = n - 1;
    int cards[n];
    for (int i = 0; i < n; i++)
    {
        cin >> cards[i];
    }
    while (left <= right)
    {
        if (cards[left] >= cards[right])
        {
            s_score += cards[left];
            left++;
        }
        else
        {
            s_score += cards[right];
            right--;
        }
        if (left > right)
        {
            break;
        }
        if (cards[left] >= cards[right])
        {
            d_score += cards[left];
            left++;
        }
        else
        {
            d_score += cards[right];
            right--;
        }
    }
    cout << s_score << " " << d_score << endl;
}