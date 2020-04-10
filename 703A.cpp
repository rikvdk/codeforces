#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int n, c, m, r=0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> m >> c;
        r += m > c;
        r -= c > m;
    }
    if(r == 0) cout << "Friendship is magic!^^\n";
    else if(r > 0) cout << "Mishka\n";
    else cout << "Chris\n";
}
