#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    int n, a[5005];

    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i];

    for (int i = 1; i < n; ++i) {
        if (a[a[a[i]]] == i) {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";
}
