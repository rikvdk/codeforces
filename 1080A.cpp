#include <algorithm>
#include <cmath>
#include <iostream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    cout << 2*n/k + (2*n%k !=0) + 5*n/k + (5*n%k !=0) + 8*n/k + (8*n%k !=0);
}
