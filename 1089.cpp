#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, peaks = 0, *sample;
    while (cin >> n && n)
    {
        sample = (int *)malloc(n*sizeof(int));
        for(i = 0; i < n; i++)
            cin >> sample[i];

        if((sample[0] > sample[n-1] && sample[0] > sample[1]) || (sample[0] < sample[n-1] && sample[0] < sample[1]))
            peaks++;

        for(i = 1; i < n-1; i++)
            if((sample[i] > sample[i-1] && sample[i] > sample[i+1]) || (sample[i] < sample[i-1] && sample[i] < sample[i+1]))
                peaks++;

        if((sample[n-1] > sample[n-2] && sample[n-1] > sample[0]) || (sample[n-1] < sample[n-2] && sample[n-1] < sample[0]))
            peaks++;

        cout << peaks << endl;

        peaks = 0;
        free(sample);
    }
    return 0;
}