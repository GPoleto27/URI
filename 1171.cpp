#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, val[999999], a, maior, menor;
    cin >> n;
    maior = 0;
    menor = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        val[a-1]++;
        if (a < menor)
            menor = a;
        if (a > maior)
            maior = a;
    }
    for (int i = menor-1; i < maior; i++)
    {
        if (val[i])
            cout << i+1 << " aparece " << val[i] << " vez(es)\n";
    }
    return 0;
}