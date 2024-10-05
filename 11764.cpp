#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int main()
{

    int t, n, high, low;
    vi h;
    cin >> t;
    for (int j = 1; j <= t; ++j)
    {
        cin >> n;
        h.resize(n);
        high = 0;
        low = 0;
        for (int i = 0; i < n; ++i)
            cin >> h[i];
        for (int i = 0; i < n-1; ++i)
        {
            if (h[i] < h[i+1])
                high++;
            else if (h[i] > h[i+1])
                low++;
        }
        cout << "Case " << j << ": " << high << " " << low << "\n";
    }

    return 0;
}