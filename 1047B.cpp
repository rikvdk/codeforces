#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    ll n, x, y, r=0;
    cin >> n;
    for (ll i = 0; i < n; ++i) {
        cin >> x >> y;
        r = max(r, x+y);
    }
    cout << r;
}
