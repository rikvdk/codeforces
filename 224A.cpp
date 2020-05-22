#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << 4 * (sqrt(a*b/c) + sqrt(a*c/b) + sqrt(b*c/a));
}
