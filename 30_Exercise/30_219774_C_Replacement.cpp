#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count;
    cin >> count;
    vector<int> varr(count);
    for( int i = 0; i < count; i++ ) //O(N)
    {
        int temp;
        cin >> temp;
        if( temp < 0 )
        {
            varr[i] = 2;
        }
        else if ( temp > 0 )
        {
            varr[i] = 1;
        }
        else
        {
            varr[i] = 0;
        }
    }
    for( int val: varr )
    {
        cout << val << ' ';
    }
    return 0;
}