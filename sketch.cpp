#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> count;
    int n;
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < count; i++)
    {
        cin >> n;
        if (n > max) max = n;
        if (n < min) min = n;
    }
    cout << min << " " << max;
    return 0;
}