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
    int a, b, ans = 0;
    cin >> a >> b;

    if (a != b) {
        a = abs(a - b);
        ans = a / 10 + (a % 10 > 0);
    }

    printf("%d\n", ans);
}

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i) {
       solve(); 
    }
}
