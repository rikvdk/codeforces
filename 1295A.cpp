#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    int t, n;
    cin >> t;
    for(int i = 0; i < t; ++i) {
        cin >> n;
        if (n % 2 ) { n-=3; cout << 7;}
        for (int i = 0; i < n/2; ++i) cout << 1;
        cout << '\n';
    }
}
