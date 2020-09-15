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

int a[1005];

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];

    swap(*max_element(a, a+n), a[0]);
    int cd = a[0];
    int start = 1;

    while (cd > 1 && start < n) {
        int index = -1;
        int max_cd = 0;

        for (int i = start; i < n; ++i) {
            int t = gcd(cd, a[i]);
            if (t > max_cd) {
                max_cd = t;
                index = i;
            }
        }
        cd = max_cd;

        swap(a[index], a[start]);
        start++;
    }

    for (int i = 0; i < n; ++i) printf("%d ", a[i]);
    puts("");
}

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i) {
        solve();
    }
}
