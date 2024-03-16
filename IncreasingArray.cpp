#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ll n, a = 0, d = 0, r = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> d;
        if (d < a && i != 0)
        {
            r += a - d;
            d += a - d;
        }
        a = d;
    }
    cout << r << endl;

    return 0;
}
