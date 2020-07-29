#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

typedef long long ll;

ll highest_digit(ll n) {
    ll hd = 0;
    while (n) {
        hd = max(hd, n % 10);
        n /= 10;
    }
    return hd;
}

int main()
{
    ll n, i=0;
    cin >> n;

    for(; n; ++i) {
        ll hd = highest_digit(n);
        n -= hd;
    }

    cout << i << '\n';
}
