#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    int n, p[2005], lp=1;
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> p[i];

    for(int i = 1; i <= n; ++i) {
        int t = 1;
        int j = i;
        while(p[j] != -1) {
            j = p[j];
            t++;
        }
        lp = max(lp, t);
    }
    cout << lp << '\n';
}
