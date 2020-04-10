#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int n, p;
    double f=0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> p;
        f += (double)p / n;
    }
    printf("%.12f\n", f);
}
