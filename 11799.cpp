#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int main()
{
    int t, n;
    vi s;
    cin >> t;
    for (int j = 0; j < t; ++j)
    {
        cin >> n;
        s.resize(n);
        for (int i = 0; i < n; ++i)
            cin >> s[i];
        cout << "Case " << j+1 << ": " << *max_element(s.begin(), s.end()) << "\n";
    }

    return 0;
}