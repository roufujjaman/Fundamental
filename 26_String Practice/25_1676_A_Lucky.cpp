#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count;
    cin >> count;
    for ( int i = 0; i < count ; i++ )
    {
        int num_inpt;
        cin >> num_inpt;
        int l = 0, r = 0;
        for ( int i = 0; i < 6; i++)
        {
            if( i < 3 )
            {
                r += num_inpt % 10;
            }
            else
            {
                l += num_inpt % 10;
            }
            num_inpt = num_inpt / 10;
        }
        if ( l == r ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}