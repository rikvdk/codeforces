#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    ll n, m, a;
    cin >> n >> m >> a;
    ll na = n/a + (n%a != 0);
    ll ma = m/a + (m%a != 0);
    cout << na * ma;
}
