#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
    int n, k, diamonds[50010];
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> diamonds[i];
    sort(diamonds, diamonds + n);
    int x = 0, answer = 0;
    int left = 0, right = 0, head = 0, tail = 0;
    while (head + 1 < n)
    {
        head++;
        while (diamonds[head] - diamonds[tail] > k)
        {
            tail++;
            while (right + 1 < tail)
            {
                right++;
                while (diamonds[right] - diamonds[left] > k) left++;
                x = max(x, right - left + 1);
            }
        } 
        answer = max(answer, x + head - tail + 1);
    }
    cout << answer << '\n';
    return 0;
}
