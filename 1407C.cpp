#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <iterator>
#include <numeric>
#include <string>
#include <utility>
#include <vector>

using namespace std;

typedef long long ll;

int a[10005];

void solve() {
    int n, x=0, y, z1, z2;
    cin >> n;

    for (y = 1; y < n; ++y) {
        printf("? %d %d\n", x+1, y+1);
        cout.flush();
        cin >> z1;
        printf("? %d %d\n", y+1, x+1);
        cout.flush();
        cin >> z2;

        if (z1 > z2) {
            a[x] = z1;
            x = y;
        } else {
            a[y] = z2;
        }
    }

    if (a[x] == 0) a[x] = n;
    else a[y-1] = n;

    cout << "! ";
    std::copy_n(a, n, std::ostream_iterator<int>( std::cout, " " ));
    puts("");
}

int main()
{
    /* int t; */
    /* cin >> t; */
    /* for(int i = 0; i < t; ++i) { */
        solve();
    /* } */
}
