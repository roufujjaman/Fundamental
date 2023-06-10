#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count;
    cin >> count;
    for( int i = 0; i < count; i++ )
    {
        for( int j = 0; j < count; j++ )
        {
            if ( i == count / 2 && j == count / 2) cout << 'X';
            else if( i == j ) cout << '\\';
            else if ( i + j == count - 1 ) cout << '/';
            else cout << ' ';
        }
        cout << endl;
    }
    return 0;
}