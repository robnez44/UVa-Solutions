#include <bits/stdc++.h>
using namespace std;

int main(){

    int t, n;
    string s;
    cin >> t;
    while (t--) {
        cin >> n;
        s = to_string((((((n * 567) / 9) + 7492) * 235) / 47) - 498);
        cout << s[s.size() - 2] << "\n";
    }

    return 0;
}