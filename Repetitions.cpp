#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int r = 1, m = 1;
    for (int i = 1; i < (int)n.size(); i++)
    {
        if (n[i] == n[i-1])
        {
            r++;
        }
        else
        {
            if (r > m)
            {
                m = r;
            }
            r = 1;
        }
    }

    if (r > m)
    {
        m = r;
    }
    cout << m << endl;

    return 0;
}
