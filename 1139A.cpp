#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int n, r=0;
    char c;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> c;
        if((c-'0') % 2 == 0) r += i+1;
    }
    cout << r;
}
