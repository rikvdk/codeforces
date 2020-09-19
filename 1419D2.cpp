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
    vector<int> vi;
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];

    sort(a, a+n);
    int i = 0;
    int j = n/2;

    while (j < n) {
        vi.push_back(a[j++]);
        if (i == n/2) break;
        vi.push_back(a[i++]);
    }

    int ans = 0;
    for (int i = 1; i < (n-1); i += 2) {
        if (vi[i-1] > vi[i] && vi[i+1] > vi[i]) {
            ++ans;
        }
    }

    printf("%d\n", ans);
    for (int i = 0; i < n; ++i) printf("%d ", vi[i]);
    puts("");
}

int main()
{
    solve();
}
