#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef long long ll;

int main()
{
    int n;
    ll b, x=0ll;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> b;
        cout << x+b << ' ';
        x = max(x, x+b);
    }
    cout << '\n';
}
