#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    int t;
    ll a, b;
    cin >> t;
    for(int i = 0; i < t; ++i) {
        cin >> a >> b;
        if (a=a%b) cout << b-a << '\n';
        else cout << "0\n";
    }
}
