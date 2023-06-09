#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> varr_alphabet( 26, 0 );
    string str_inp;
    cin >> str_inp;
    for( int val: str_inp ) //O(N)
    {
        varr_alphabet[ val - 'a' ]++;
    }
    for( int i = 0; i < 26; i++ ) // O(N)
    {
        if( varr_alphabet[i] != 0 )
        {
            char t = i + 'a';
            cout << t << " : " << varr_alphabet[i] << endl;
        }
    }
    return 0;
}