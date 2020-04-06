#include <algorithm>
#include <iostream>
#include <vector>

#define rep(i,a,b) for(int i = a; i < b; ++i)
#define REP(i,a,b) for(int i = a; i <= b; ++i)
#define repr(i,a,b) for(int i = a; i > b; --i)
#define REPR(i,a,b) for(int i = a; i >= b; --i)

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main()
{
    int n, t, u, v, xa=0, ya=0, xb=0, yb=0;

    cin >> n;
    rep(i,0,n)  {
        cin >> t >> u >> v;
        if(t == 1)  {
            xa += u;
            ya += v;
        } else { 
            xb += u;
            yb += v;
        }
    }

    cout << ((xa >= ya) ? "LIVE\n" : "DEAD\n");
    cout << ((xb >= yb) ? "LIVE\n" : "DEAD\n");
}
