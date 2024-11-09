#include <bits/stdc++.h>
using namespace std;

double number(int n)
{
    string num = to_string(n);
    double sum = 0;
    for (int i = 0; i < num.size(); ++i)
        sum += num[i] - '0';

    if (sum < 10)
        return sum;
    else
        return number(sum);
}

int main()
{
    string name1, name2;
    int suma1, suma2;
    double r;
    while (getline(cin, name1))
    {
        getline(cin, name2);
        suma1 = 0;
        suma2 = 0;
        r = 0;
        for (char c : name1)
        {
            if (tolower(c) >= 'a' && tolower(c) <= 'z')
            {
                suma1 += tolower(c) - 'a' + 1;
            }
        }
        for (char c : name2)
        {
            if (tolower(c) >= 'a' && tolower(c) <= 'z')
            {
                suma2 += tolower(c) - 'a' + 1;
            }
        }
        double val1 = number(suma1), val2 = number(suma2);
        r = (min(val1,val2)/max(val1,val2))*100;
        cout << fixed << setprecision(2) << r << " %\n";
    }

    return 0;
}