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
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];

    printf("%d\n", (n-1) / 2);
    sort(a, a+n);
    int i = 0;
    int j = n-1;

    while (i <= j) {
        printf("%lld ", a[j--]);
        if (i > j) break;
        printf("%lld ", a[i++]);
    }
    puts("");
}

int main()
{
    solve();
}
