#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    ll n, m, r=0;
    cin >> m >> n;
    while((n % (m * 3)) == 0 && ++r) m *= 3;
    while((n % (m * 2)) == 0 && ++r) m *= 2;
    if (n == m) cout << r << '\n';
    else cout << "-1\n";
}
