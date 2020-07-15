#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

bool is_prime(int n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;


    auto bound = sqrt(n);
    for (int i = 5; i < bound; ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;

}

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= 1000; ++i) {
        if (!is_prime(n*i + 1)) {
            cout << i << '\n';
            break;
        }
    }
}
