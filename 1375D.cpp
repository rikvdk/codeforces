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

int MEX(vector<int> &c) {
    for (unsigned i = 0; i < c.size(); ++i) {
        if (c[i] == 0) {
            return i;
        }
    }
    return 0;
}

bool done(vector<int> &a) {
    for (int i = 1; i < a.size(); ++i) {
        if (a[i] < a[i-1]) {
            return false;
        }
    }

    return true;
}


void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> c(n+1);
    vector<int> d;

    for (int i = 0; i < n; ++i) cin >> a[i], ++c[a[i]];

    for (int k = 0; !done(a); ++k) {
        int mex = MEX(c);
        int index = mex;

        if (mex == n) {
            for (int i = 0; i < n; ++i) {
                if (a[i] != i) {
                    index = i;
                    break;
                }
            }
        }

        --c[a[index]];
        a[index] = mex;
        ++c[mex];

        d.push_back(index + 1);
    }

    printf("%zu\n", d.size());
    for (int i = 0; i < d.size(); ++i) printf("%d ", d[i]);
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
