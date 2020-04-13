#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    int t, n, d, a, r, x;;
    cin >> t;
    for(int i = 0; i < t; ++i) {
        cin >> n >> d >> r;
        for (int i = 1; i < n; ++i) {
            cin >> a;
            x = min(a, d/i);
            r += x;
            d -= x*i;
        }
        cout << r << '\n';
    }
}
