#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> students(n);

        for (int i = 0; i < n; ++i)
            cin >> students[i];

        int maxScore = students[0];
        int maxDiff = INT_MIN;

        for (int i = 1; i < n; ++i) {
            maxDiff = max(maxDiff, maxScore - students[i]);
            maxScore = max(maxScore, students[i]);
        }

        cout << maxDiff << "\n";
    }
    return 0;
}