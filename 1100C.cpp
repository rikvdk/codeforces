#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

double PI = acos(-1);

int main()
{
    double n, r;
    cin >> n >> r;

    double x = sin(PI / n);
    printf("%.10f\n", r*x / (1-x));
}
