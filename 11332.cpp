#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {

        int last = n % 10;

        sum += last;

        n /= 10;
    }

    if (sum < 10) return sum;
    else return sumOfDigits(sum);    
}

int main(){

    int n;
    while (cin >> n)
    {
        if(n == 0) return 0;

        cout << sumOfDigits(n) << "\n";
    }
    
    return 0;
}