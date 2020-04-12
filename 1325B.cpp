#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    int t, n, r;
    ll a[100005];
    cin >> t;
    for(int i = 0; i < t; ++i) {
        r = 1;
        cin >> n;
        for (int i = 0; i < n; ++i) cin >> a[i];
        sort(a, a+n);
        for (int i = 1; i < n; ++i) r += a[i] != a[i-1];
        cout << r << '\n';
    }
}
