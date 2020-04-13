#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    int t, a[3], r;
    cin >> t;
    for(int i = 0; i < t; ++i) {
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a+3, greater<int>());
        
        r = 0;
        r += a[0] && a[0]--;
        r += a[1] && a[1]--;
        r += a[2] && a[2]--;
        r += a[0] && a[1] && a[0]-- && a[1]--;
        r += a[0] && a[2] && a[0]-- && a[2]--;
        r += a[1] && a[2] && a[1]-- && a[2]--;
        r += a[0] && a[1] && a[2] && a[0]-- && a[1]-- && a[2]--;
        cout << r << '\n';
    }
}
