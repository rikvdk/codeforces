#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    int n, s, a[1005], b[1005];
    cin >> n >> s;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    for (int i = 1; i <= n; ++i) cin >> b[i];

    if (a[1] == 0) {
        cout << "NO\n";
    } else if (a[s] == 1) {
        cout << "YES\n";
    } else if (b[s] == 0) {
        cout << "NO\n";
    } else {
        for (int i = s+1; i <= n; ++i) {
            if(a[i] && b[i]) {
                cout << "YES\n";
                return 0;
            }
        }
        cout << "NO\n";
    }
}
