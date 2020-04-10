#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int binomial_coeff(int n, int k) {
    if(k == 0 || k == n) return 1;
    return binomial_coeff(n-1, k-1) + binomial_coeff(n-1, k);
}

int main()
{
    int n;
    cin >> n;
    --n;
    cout << binomial_coeff(2*n, n);
}
