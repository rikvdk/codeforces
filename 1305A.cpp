#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    int t, n, a[105], b[105];
    cin >> t;
    for(int i = 0; i < t; ++i) {
        cin >> n;
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];
        sort(a, a+n);
        sort(b, b+n);
        for (int i = 0; i < n; ++i) cout << a[i] << ' ';
        cout << '\n';
        for (int i = 0; i < n; ++i) cout << b[i] << ' ';
        cout << '\n';
    }
}
