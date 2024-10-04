#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;

int main()
{
    int i = 1;
    string s;
    while (true)
    {
        cin >> s;

        if (s == "#")
        {
            return 0;
        }

        if (s == "HELLO")
        {
            cout << "Case " << i << ": ENGLISH\n";
        }
        else if (s == "HOLA")
        {
            cout << "Case " << i << ": SPANISH\n";
        }
        else if (s == "HALLO")
        {
            cout << "Case " << i << ": GERMAN\n";
        }
        else if (s == "BONJOUR")
        {
            cout << "Case " << i << ": FRENCH\n";
        }
        else if (s == "CIAO")
        {
            cout << "Case " << i << ": ITALIAN\n";
        }
        else if (s == "ZDRAVSTVUJTE")
        {
            cout << "Case " << i << ": RUSSIAN\n";
        }
        else
        {
            cout << "Case " << i << ": UNKNOWN\n";
        }
        i++;
    }

    return 0;
}
