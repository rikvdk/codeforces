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

void solve() {
    ll a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;

    ll aa = max(a - n, x);
    ll ab = max(b - (n - (a - aa)), y);

    ll bb = max(b - n, y);
    ll ba = max(a - (n - (b - bb)), x);

    printf("%lld\n", min(aa * ab, bb * ba));
}

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i) {
       solve(); 
    }
}
