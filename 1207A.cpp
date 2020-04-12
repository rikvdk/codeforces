#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int t, b, p, f, h, c;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> b >> p >> f >> h >> c;
        b /= 2;
        if (h > c) {
            p = min(p, b);
            b -= p;
            f = min(f, b);
        } else {
            f = min(f, b);
            b -= f;
            p = min(p, b);
        }
        cout << p*h+f*c << '\n';
    }
}
