#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <numeric>
#include <string>
#include <utility>
#include <vector>

using namespace std;

typedef long long ll;

ll a[100005];

void solve() {
    ll n;
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];

    if (n == 1) {
        printf("1 1\n%lld\n1 1\n0\n1 1\n0\n", -a[0]);
        return;
    }

    printf("%d %lld\n", 1, n-1);
    for (int i = 0; i < n-1; ++i) printf("%lld ", a[i] * (n-1)), a[i] *= n;
    puts("");


    printf("%lld %lld\n", n, n);
    printf("%lld\n", n - a[n-1]);
    a[n-1] = n;

    printf("%d %lld\n", 1, n);
    for (int i = 0; i < n; ++i) printf("%lld ", -a[i]);
    puts("");
}

int main()
{
    solve();
}
