#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int t, n, x, a, b, c;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n >> x >> a >> b;
        c = a;
        a = min(a, b);
        b = max(c, b);
        cout << abs(b-a) + min(x, n-b+a-1) << '\n';
    }
}
