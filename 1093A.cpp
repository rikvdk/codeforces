#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t, x;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> x;
        if(x == 3) cout << "1\n";
        else cout << x/2 - x%2 << '\n';
    }
}
