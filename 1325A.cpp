#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    int t;
    ll x;
    cin >> t;
    for(int i = 0; i < t; ++i) {
        cin >> x;
        cout << 1 << ' ' <<  x-1 << '\n';
    }
}
