#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
    ll a, b;
    cin >> a >> b;

    int years = 0;
    for(;a <= b; years++) {
        a *= 3;
        b *= 2;
    }
    cout << years;
}
