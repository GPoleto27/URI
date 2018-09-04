#include <iostream>

using namespace std;

int MDC(int a, int b)
{
    return b == 0 ? a : MDC(b, a % b);
}

int main()
{
    int N, a, b;
    cin >> N;
    while (N--)
    {
        cin >> a;
        cin >> b;
        cout << MDC(a, b) << endl;
    }
    return 0;
}
