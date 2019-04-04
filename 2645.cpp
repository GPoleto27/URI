#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned int n, t, s = 0;
    cin >> n >> t;
    unsigned int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    for (int i = 0; i < n; i++)
    {
        if (a[i] + t + s > b[i])
        {
            cout << "no\n";
            return 0;
        }
        s+=a[i];
    }
    cout << "yes\n";
    return 0;
}