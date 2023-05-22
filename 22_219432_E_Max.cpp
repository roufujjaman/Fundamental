#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count;
    cin >> count;
    int n;
    int max = INT_MIN;
    for (int i = 0; i < count; i++)
    {
        cin >> n;
        if (n > max) max = n;
    }
    cout << max;
    return 0;
}