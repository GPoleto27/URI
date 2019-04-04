#include <iostream>

using namespace std;

int main()
{
    int n, i = 0;
    while(cin >> n && n != 0)
    {
        cout << "1";
        for (i = 2; i*i <= n; i++)
        {
            cout << " " <<i*i ;
        }
        cout << endl;
    }
    return 0;
}
