#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count;
    cin >> count;
    int arrFrq[26] = {0};
    for ( int i = 0; i < count; i++ )
    {
        char input;
        cin >> input;
        arrFrq[input - 'a']++;
    }
    for( char i = 'a'; i <= 'z'; i++ )
    {
        if( arrFrq[i - 'a'] > 0 )
        {
            for( int j = 0; j < arrFrq[i - 'a']; j++ )
            {
                cout << i;
            }
        }
    }
    return 0;
}