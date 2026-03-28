#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll x = (-1 + (sqrt(1 - (4 * 1 * (-2 * n))))) / 2;
        cout << x << "\n";
    }
    return 0;
}