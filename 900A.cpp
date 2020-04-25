#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    int n;
    ll x, y, l=0, r=0;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> x >> y;
        l += x<0;
        r += x>0;
    }

    if (l > 1 && r > 1) cout << "No\n";
    else cout << "Yes\n";
}
