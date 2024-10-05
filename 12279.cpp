#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int main()
{

    int n;
    vi nums;
    for (int i = 1; cin >> n; ++i)
    {
        if (n == 0)
        {
            return 0;
        }
        else
        {
            nums.resize(n);
            for (int j = 0; j < n; ++j)
                cin >> nums[j];
            cout << "Case " << i << ": " << (int)nums.size() - 2*count(nums.begin(), nums.end(), 0) << "\n"; 
        }
    }

    return 0;
}