#include <bits/stdc++.h>
using namespace std;

int main(){

    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a > b)
            cout << ">\n";
        else if (b > a)
            cout << "<\n";
        else
            cout << "=\n";
    }
    
    return 0;
}