#include <bits/stdc++.h>
using namespace std;

int main(){

    int t, x, y, z, i = 1;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> z;
        if (x <= 20 && y <= 20 && z <= 20)
        {
            cout << "Case " << i << ": good\n";
        }
        else
        {
            cout << "Case " << i << ": bad\n";
        }
        i++;
    }

    return 0;
}