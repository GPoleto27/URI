#include<bits/stdc++.h>
#define A 0
#define B 1
#define C 2

using namespace std;

int main()
{
    int val[3];
    while(cin >> val[A] && val[A] != EOF)
    {
        cin >> val[B] >> val[C];
        if(val[A] != val[B])
        {
            if(val[A] != val[C])
                cout << "A\n";
            else if(val[B] != val[C])
                cout << "B\n";
        } else if(val[C] != val[A] && val[C] != val[B])
            cout << "C\n";
            else
            cout << "*\n";
    }
    return 0;
}