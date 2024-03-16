#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    vector<int> vet(n);
    for (int i = 1; i < n; i++)
    {
        cin >> vet[i];
    }
    sort(vet.begin(), vet.end());
    int i = 1;
    while (i < n)
    {
        if (vet[i] != i)
        {
            break;
        }
        i++;
    }

    cout << i << endl;

    return 0;
}
