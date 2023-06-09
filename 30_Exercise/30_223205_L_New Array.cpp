#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count;
    cin >> count;
    vector<int> varr( count * 2 );
    for( int i = 0; i < count * 2; i++ )
    {
        if( i < count )
        {
            cin >> varr[ i + count ];
        }
        else
        {
            cin >> varr[ i - count ];
        }
    }

    for( int val: varr )
    {
        cout << val << ' ';
    }
    return 0;
}