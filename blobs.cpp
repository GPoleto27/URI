#include <iostream>

using namespace std;

int main()
{
    float C;
    int N, dias = 0;
    cin >> N;
    while (N--)
    {
        cin >> C;
        while (C > 1)
        {
            C /= 2;
            dias++;
        }
        cout << dias << " dias" << endl;
        dias = 0;
    }
    return 0;
}
