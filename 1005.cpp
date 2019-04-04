#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    double A, B;
    cin >> A >> B;
    A*=0.35; B*=0.75;
    double C = (A+B)/1.1;
    printf("MEDIA = %.5lf\n", C);
    return 0;
}