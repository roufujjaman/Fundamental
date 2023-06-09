#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count;
    cin >> count;
    vector<int> varr(count);
    for( int i = 0; i < count; i++ ) //O(N)
    {
        cin >> varr[i];
    }
    for( auto s = varr.begin() , e = varr.end() - 1 ; s < e; s++, e--)
    {
        swap(*s, *e);
    }
    for( int val: varr )
    {
        cout << val << ' ';
    }
    return 0;
}