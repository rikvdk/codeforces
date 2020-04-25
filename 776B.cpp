#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    int n;
    ll a[100005];
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];
    sort(a, a+n);

    for (int i = 1; i < n-1; ++i) {
        if(a[i-1] + a[i] > a[i+1]) {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";
}
