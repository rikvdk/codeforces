#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
    ll n, x, r=0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> x;
            if(i == j || j+i == n-1 || i == n/2 || j == n/2) r += x;
        }
    }
    cout << r;
}
