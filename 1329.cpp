#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, mary = 0, john = 0;
    while (cin >> n && n!= 0)
    {
        for(int i = 0; i < n; i++)
        {
            cin >> a;
            if (a)
                john++;
            else
                mary++;
        }
        cout << "Mary won " << mary <<" times and John won " << john << " times\n";
        mary = john = 0; 
    }
    return 0;
}