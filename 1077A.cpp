#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long t, a, b, k;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> a >> b >> k;
        auto x = k/2 * (a-b);
        if (k % 2) cout << x+a << '\n';
        else cout << x << '\n';
    }
}
